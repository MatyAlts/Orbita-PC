# Órbita 1.1.0 con ReXGlue

El proyecto carga el XEX local indicado en `orbita_manifest.toml`. ReXGlue recompila PowerPC a C++ y enlaza el ejecutable de escritorio con el runtime de Xbox 360. La GPU Xenos se ejecuta a través del backend gráfico de ReXGlue.

## Estado del arranque

| Plataforma | Resultado |
|---|---|
| macOS Intel 15.8.2 | El Mach-O se ejecutó en este Mac con la RTX 2060 y renderizó la interfaz con la red bloqueada. Tras fallar la carga del catálogo, mostró **Tentar de novo** y **Teste offline**. La prueba visual verifica esa pantalla. El botón X enviado por el mando virtual no produjo una transición confirmada. |
| macOS Apple Silicon | Hay preset de compilación. Quedan pendientes el binario ReXGlue y la prueba visual en un Mac ARM. |
| Windows x64 | Se compiló y enlazó desde macOS. El PE32+ GUI x64 y las DLL de ReXGlue se encuentran en `out/win-amd64-cross/`. Queda pendiente ejecutarlo en Windows. |

El controlador NVMTL de esta RTX 2060 rechazaba operaciones LLVM vectoriales de los shaders de cómputo. El ajuste local evita la fusión que genera `llvm.fshl.v4i32` y descompone `clz` vectorial en operaciones escalares. Conserva las optimizaciones de los fragment shaders, necesarias para los samplers de NVMTL. La prueba desactivó los argument buffers de MoltenVK y las opciones de MSAA 2x nativo y compilación asíncrona de ReXGlue. Algunos pipelines opcionales de FXAA siguen dando avisos.

La corrección se carga solo dentro del proceso de Órbita. Para iniciar la misma prueba con un perfil temporal y la red bloqueada:

```sh
./tools/run-macos-nvmtl-offline.sh
```

Evidencia local en [shader antes](../analysis/rexglue-macos-shader-baseline.log), [shader después](../analysis/rexglue-macos-shader-test.log), [aislamiento de red](../analysis/rexglue-macos-network-isolation.log) y [pantalla sin catálogo](../analysis/orbita-macos-catalog-offline.png).

## Arranque online en macOS Intel

```sh
./tools/run-macos-nvmtl-online.sh
```

El lanzador aplica el ajuste NVMTL y usa la compilación de Órbita 1.1.26-XEX. El volumen `game:` se monta con escritura sobre una copia privada por versión, dentro de `~/Library/Application Support/Orbita-ReXGlue/`. Órbita guarda ahí sus archivos de sesión en `XC360`. Esta actualización se obtuvo del canal estable del propio actualizador y se recompiló en `out/online-1.1.26/`. La compilación y el XEX 1.1.0 del ensayo offline siguen en sus rutas anteriores.

El runtime de la compilación online incluye el [parche de renombrado DOS](patches/rexglue-dos-rename.patch), aplicado sobre ReXGlue `ebac1cf0d04bab0042a5dd6148b34ab3953e9c0d`. Separa los argumentos de `NtOpenFile` y permite a `NtSetInformationFile` resolver el directorio especial `ObDosDevices` y el prefijo DOS. Si reconstruís el SDK, aplicá el parche antes de compilar y desplegá la nueva `librexkernel.dylib` junto al ejecutable online.

## Compilación

Desde este directorio, con CMake, Ninja y un SDK ReXGlue 0.11.0 instalado para el sistema de destino. La compilación comprobada usó ReXGlue en la revisión `ebac1cf0d04bab0042a5dd6148b34ab3953e9c0d`.

### macOS Intel

```sh
cmake --preset mac-amd64 -DCMAKE_PREFIX_PATH=/ruta/al/sdk
cmake --build --preset mac-amd64-release
```

En Apple Silicon usá `mac-arm64` y `mac-arm64-release`, con el SDK para ARM. Para construir el SDK desde fuentes, instalá Vulkan SDK con MoltenVK y Vulkan Memory Allocator. En la prueba local con AppleClang 17, la unidad `xboxkrnl_crypt.cpp` upstream se compiló con LLVM Clang 22 y las cabeceras de Xcode para resolver un error de expresión constante. Si la instalación del SDK deja `libvulkan.1.dylib` como enlace a sí mismo, copiá a esa ruta la biblioteca real del Vulkan SDK. Los archivos de runtime se copian junto al ejecutable durante el build.

Prueba sin red desde este directorio con el binario compilado durante esta sesión:

```sh
/usr/bin/sandbox-exec -p '(version 1) (allow default) (deny network*)' \
  ./out/mac-amd64/orbita \
  --title.game_root="$PWD/../orbita-1.1.0-XEX/orbita" \
  --ui.fullscreen=false
```

Si usás el preset multiconfiguración de arriba, la ruta del binario es `./out/build/mac-amd64/Release/orbita`. El bloqueo de red se verificó con una prueba TCP local que conecta sin el perfil y falla con `Operation not permitted` bajo el mismo perfil.

### Windows x64

La compilación cruzada usó LLVM Clang 22.1.8, Zig 0.15.2 como proveedor de `lld-link`, los encabezados y bibliotecas MSVC/Windows obtenidos con xwin y el paquete ReXGlue 0.11.0 para Windows x64. El C++ se generó en el Mac con el SDK host.

```sh
python3 tools/cross-compile-windows.py \
  --clang /ruta/a/clang --zig /ruta/a/zig \
  --rexglue-sdk /ruta/al/sdk/win-amd64 --xwin /ruta/al/xwin-splat
```

El resultado se encuentra en `out/win-amd64-cross/`. Conservá el ejecutable y sus DLL en la misma carpeta y usá un Windows x64 con los redistribuibles de Visual C++.

```powershell
.\orbita.exe "--title.game_root=C:/ruta/a/la/carpeta/orbita"
```

Para compilar directamente en Windows, desde una consola de desarrollo de Visual Studio con Clang y Ninja:

```powershell
cmake --preset win-amd64 "-DCMAKE_PREFIX_PATH=C:/ruta/al/sdk"
cmake --build --preset win-amd64-release
```

En un host Windows desconectado, ejecutar `out\build\win-amd64\Release\orbita.exe` con `--title.game_root` apuntando a la carpeta que contiene `default.xex`. La prueba se considera aprobada al observar y poder navegar el menú de Órbita.

Documentación upstream [ReXGlue](https://github.com/rexglue/rexglue-sdk/blob/ebac1cf0d04bab0042a5dd6148b34ab3953e9c0d/docs/site/pages/getting-started.md).
