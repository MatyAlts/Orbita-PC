# Órbita 1.1.0 para Windows y macOS

El XEX se tradujo a C++ con XenonRecomp. El directorio `generated/` contiene el resultado. Las bibliotecas estáticas contienen código de CPU compilado para el sistema de destino. El arranque, la interfaz, el inicio de sesión y el streaming siguen pendientes de integración y pruebas.

## Evidencia

- `default.xex` tiene SHA-256 `3dce7485db37d2e3f00e01c6b4092fedb8f3db1f19d19dd5471ffa133a5fcc50`. La imagen cargada usa PowerPC, base `0x82000000` y entrada `0x82290398`. Las tablas del XEX registran 57 ordinales distintos de `xam.xex` y 152 de `xboxkrnl.exe`.
- REA 6.9.0 midió la entropía del XEX, inventarió las secciones del PE reconstruido mediante objdump y reconoció un objeto Mach-O x86_64 compilado a partir de la primera generación del C++. Su inspector de artefactos rechazó el contenedor XEX y la arquitectura COFF `0x01f2` de la imagen extraída. La identificación de la clave de desarrollo viene de la extracción de una imagen con cabeceras válidas y de la ejecución exitosa de XenonAnalyse tras adaptar el cargador.
- `xenon-recomp.log` registra 3.520 avisos de instrucciones sin traducción y 80 fallos de decodificación. Algunas direcciones pueden corresponder a datos que el análisis heurístico clasificó como código. XenonAnalyse generó un archivo sin entradas de tablas de salto. La configuración contiene las ocho rutinas de guardado y restauración, identificadas por coincidencias únicas en `.text`.
- El enlace de prueba de macOS Intel falla con 197 símbolos de importación Xbox sin resolver. `macos-external-symbols.txt` enumera las dependencias externas, incluidas las de la biblioteca estándar. El enlace cruzado de Windows x64 también falla por importaciones Xbox. Los servicios principales incluyen vídeo, audio, red, perfiles y archivos.
- En ReXGlue, revisión `ebac1cf0d04bab0042a5dd6148b34ab3953e9c0d`, un cotejo textual encontró 174 nombres registrados o reenviados, 17 stubs explícitos y 6 nombres sin coincidencia por esos patrones. El cotejo solo evalúa nombres. El ABI y el comportamiento quedan por verificar. Un porte con ReXGlue debe regenerar el código para su propio runtime.

## Regenerar la traducción

Desde la raíz de este workspace, con CMake y Clang disponibles:

```sh
git clone https://github.com/hedge-dev/XenonRecomp /tmp/orbita-xenonrecomp
git -C /tmp/orbita-xenonrecomp checkout ddd128bcca99fe8bfbb99bea583c972351fa6ace
git -C /tmp/orbita-xenonrecomp submodule update --init --recursive
git -C /tmp/orbita-xenonrecomp apply "$PWD/analysis/xenonrecomp-orbita.patch"
cmake -S /tmp/orbita-xenonrecomp -B /tmp/orbita-xenonrecomp/build -DCMAKE_BUILD_TYPE=Release
cmake --build /tmp/orbita-xenonrecomp/build --target XenonAnalyse XenonRecomp -j 6
mkdir -p analysis/generated
/tmp/orbita-xenonrecomp/build/XenonAnalyse/XenonAnalyse \
  "$PWD/orbita-1.1.0-XEX/orbita/default.xex" "$PWD/analysis/jump-tables.toml"
/tmp/orbita-xenonrecomp/build/XenonRecomp/XenonRecomp \
  "$PWD/analysis/orbita.toml" /tmp/orbita-xenonrecomp/XenonUtils/ppc_context.h \
  > analysis/xenon-recomp.log 2>&1
```

Usá un directorio de clonación libre. El parche de laboratorio está dedicado al XEX de Órbita y selecciona la clave de desarrollo. Compilé las unidades C++ con `-std=c++17` y la ruta de inclusión `thirdparty/simde`. Para macOS usé Apple Clang con `-arch x86_64` o `-arch arm64` y agrupé los objetos con `libtool -static`. Para Windows usé Zig 0.15.2 con `zig c++ -target x86_64-windows-gnu -g0 -fno-sanitize=all` y `zig ar rcs`.

Fuentes primarias [XenonRecomp](https://github.com/hedge-dev/XenonRecomp/tree/ddd128bcca99fe8bfbb99bea583c972351fa6ace) y [ReXGlue](https://github.com/rexglue/rexglue-sdk/tree/ebac1cf0d04bab0042a5dd6148b34ab3953e9c0d).
