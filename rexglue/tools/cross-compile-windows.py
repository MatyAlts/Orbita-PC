#!/usr/bin/env python3
"""Link the generated Órbita sources against the Windows x64 ReXGlue SDK from macOS."""

import argparse
from concurrent.futures import ThreadPoolExecutor
import shutil
import subprocess
import tempfile
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--clang", required=True, help="Host LLVM Clang executable")
    parser.add_argument("--zig", required=True, help="Host Zig executable providing lld-link")
    parser.add_argument("--rexglue-sdk", type=Path, required=True, help="Windows x64 SDK prefix")
    parser.add_argument("--xwin", type=Path, required=True, help="xwin splat output")
    parser.add_argument("--jobs", type=int, default=8)
    parser.add_argument("--project", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()

    project = args.project.resolve()
    sdk = args.rexglue_sdk.resolve()
    xwin = args.xwin.resolve()
    generated = project / "generated/default"
    sources = sorted(generated.glob("*.cpp"))
    if not sources:
        parser.error("Generate the C++ with the host ReXGlue CLI first.")
    sources += sorted((project / "src").glob("*.cpp"))
    sources.append(sdk / "lib/cmake/rexglue/rexglue_host_alloc_stub.cpp")

    resource_dir = Path(subprocess.check_output([args.clang, "-print-resource-dir"], text=True).strip())
    flags = [
        "--driver-mode=g++", "--target=x86_64-pc-windows-msvc", "-std=c++23",
        "-fms-runtime-lib=dll", "-DNDEBUG", "-DNOMINMAX", "-DWIN32_LEAN_AND_MEAN",
        "-DUNICODE", "-D_UNICODE", "-DREX_PHYSICAL_OFFSET_IN_CODE=0",
        '-DIMGUI_USER_CONFIG="rex/ui/imgui_config.h"', "-msse4.1", "-mmmx", "-O1",
        "-I", str(project), "-I", str(sdk / "include"), "-I", str(sdk / "include/simde"),
    ]
    sdk_includes = xwin / "sdk/include"
    # Clang's intrinsic definitions must take precedence over the MSVC headers.
    for include in (resource_dir / "include", xwin / "crt/include",
                    *(sdk_includes / name for name in ("ucrt", "um", "shared", "winrt"))):
        flags.extend(("-isystem", str(include)))

    libs = (sdk / "lib", xwin / "crt/lib/x86_64", xwin / "sdk/lib/ucrt/x86_64",
            xwin / "sdk/lib/um/x86_64")
    names = ("rexxenos", "rexxam", "rexxbdm", "rexapp", "rexkernel", "rexppc", "rexbase",
             "kernel32", "user32", "shell32", "advapi32", "ole32", "d3d12", "dxgi",
             "dxguid", "ws2_32", "winmm")
    out = project / "out/win-amd64-cross"
    out.mkdir(parents=True, exist_ok=True)

    with tempfile.TemporaryDirectory(prefix="orbita-win-") as scratch:
        scratch_path = Path(scratch)

        def compile_source(source):
            obj = scratch_path / (source.stem + ".obj")
            subprocess.run([args.clang, *flags, "-c", str(source), "-o", str(obj)], check=True)
            print(source.name, flush=True)
            return obj

        with ThreadPoolExecutor(max_workers=args.jobs) as pool:
            objects = list(pool.map(compile_source, sources))
        executable = scratch_path / "orbita.exe"
        subprocess.run(
            [args.zig, "lld-link", "/subsystem:windows", "/machine:x64",
             "/out:" + str(executable), *("/libpath:" + str(lib) for lib in libs),
             *map(str, objects), *(name + ".lib" for name in names)],
            check=True,
        )

        runtime = (
            "SDL3", "TracyClient", "rexapp", "rexapu-sdl3", "rexapu", "rexbase",
            "rexfilesystem", "rexgpu-xenos-d3d12", "rexgpu-xenos-null", "rexgpu-xenos-vulkan",
            "rexgpu", "rexhid-sdl3", "rexhid-xinput", "rexkernel", "rexppc", "rexui-sdl3",
            "rexui", "rexxam", "rexxbdm",
        )
        for component in runtime:
            shutil.copy2(sdk / "bin" / (component + ".dll"), out)
        shutil.copy2(executable, out)
    print(out / "orbita.exe")


if __name__ == "__main__":
    main()
