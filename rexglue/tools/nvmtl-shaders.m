// MoltenVK shader compatibility for the NVMTL Metal device in this process.
#import <Foundation/Foundation.h>
#import <Metal/Metal.h>
#import <objc/runtime.h>

typedef id<MTLLibrary> (*CompileLibrary)(id, SEL, NSString *, MTLCompileOptions *, NSError **);
static CompileLibrary compileLibrary;
static NSString *RewriteSource(NSString *source) {
    // Fragment samplers depend on the compiler's normal optimization.
    if ([source containsString:@"#include <metal_stdlib>"] &&
        ![source containsString:@"fragment "] &&
        ![source hasPrefix:@"#pragma clang optimize off"]) {
        // NVMTL supports scalar count-leading-zeros. Lower vector calls lane by lane.
        if ([source containsString:@"clz("]) {
            NSString *anchor = @"using namespace metal;";
            NSString *helper = @"using namespace metal;\n"
                "inline uint orbita_clz(uint x) { return clz(x); }\n"
                "inline int orbita_clz(int x) { return clz(x); }\n"
                "inline uint2 orbita_clz(uint2 x) { return uint2(clz(x.x),clz(x.y)); }\n"
                "inline uint3 orbita_clz(uint3 x) { return uint3(clz(x.x),clz(x.y),clz(x.z)); }\n"
                "inline uint4 orbita_clz(uint4 x) { return uint4(clz(x.x),clz(x.y),clz(x.z),clz(x.w)); }\n"
                "inline int2 orbita_clz(int2 x) { return int2(clz(x.x),clz(x.y)); }\n"
                "inline int3 orbita_clz(int3 x) { return int3(clz(x.x),clz(x.y),clz(x.z)); }\n"
                "inline int4 orbita_clz(int4 x) { return int4(clz(x.x),clz(x.y),clz(x.z),clz(x.w)); }\n";
            if ([source containsString:anchor]) {
                source = [source stringByReplacingOccurrencesOfString:@"clz(" withString:@"orbita_clz("];
                source = [source stringByReplacingOccurrencesOfString:anchor withString:helper];
            }
        }
        // Prevent the compiler from introducing unsupported vector funnel shifts.
        source = [@"#pragma clang optimize off\n" stringByAppendingString:source];
    }
    return source;
}
static id<MTLLibrary> CompileSync(id device, SEL selector, NSString *source,
                                                 MTLCompileOptions *options, NSError **error) {
    return compileLibrary(device, selector, RewriteSource(source), options, error);
}
typedef void (^LibraryCompletion)(id<MTLLibrary>, NSError *);
typedef void (*CompileLibraryAsync)(id, SEL, NSString *, MTLCompileOptions *, LibraryCompletion);
static CompileLibraryAsync compileLibraryAsync;
static void CompileAsync(id device, SEL selector, NSString *source,
                         MTLCompileOptions *options, LibraryCompletion completion) {
    compileLibraryAsync(device, selector, RewriteSource(source), options, completion);
}
__attribute__((constructor)) static void InstallWorkaround(void) {
    @autoreleasepool {
        id<MTLDevice> device = MTLCreateSystemDefaultDevice();
        if (![device.name containsString:@"NVMTL"]) return;
        SEL selector = @selector(newLibraryWithSource:options:error:);
        Method method = class_getInstanceMethod(object_getClass(device), selector);
        if (method == NULL) return;
        compileLibrary = (CompileLibrary)method_getImplementation(method);
        Class deviceClass = object_getClass(device);
        // Add an override on this driver class without changing an inherited implementation.
        if (!class_addMethod(deviceClass, selector, (IMP)CompileSync, method_getTypeEncoding(method))) {
            method_setImplementation(method, (IMP)CompileSync);
        }
        Method asyncMethod = class_getInstanceMethod(object_getClass(device), @selector(newLibraryWithSource:options:completionHandler:));
        if (asyncMethod) {
            compileLibraryAsync = (CompileLibraryAsync)method_getImplementation(asyncMethod);
            SEL asyncSelector = method_getName(asyncMethod);
            if (!class_addMethod(deviceClass, asyncSelector, (IMP)CompileAsync, method_getTypeEncoding(asyncMethod))) {
                method_setImplementation(asyncMethod, (IMP)CompileAsync);
            }
        }
    }
}
