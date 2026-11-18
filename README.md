# Órbita-PC

Port local de Órbita 1.1.26-XEX a PC mediante recompilación estática con ReXGlue. El proyecto incluye las entradas XEX, el código generado, los lanzadores, el parche de renombrado del runtime y las pruebas de la etapa inicial con XenonRecomp.

## Descargas

- **macOS Intel**. Paquete con el ajuste NVMTL para la RTX 2060 y el runtime con la corrección de guardado. Abrí `Orbita.command` o ejecutalo desde Terminal. La sesión se guarda en una copia privada local en Application Support.
- **Windows x64**. Compilación experimental de Órbita 1.1.26. Requiere el runtime de Visual C++. El paquete usa el SDK oficial de ReXGlue para Windows y queda pendiente validar el inicio de sesión, el guardado y el streaming en Windows.

Las descargas están en [Releases](https://github.com/MatyAlts/Orbita-PC/releases). El port y sus dependencias tienen sus propios autores. Órbita es un cliente no oficial y no está afiliado a Microsoft.

## Compilación y análisis

- [ReXGlue, lanzadores y compilación cruzada](rexglue/README.md)
- [Análisis inicial con XenonRecomp y REA](analysis/README.md)
- [Parche del runtime para renombrado DOS](rexglue/patches/rexglue-dos-rename.patch)

El repositorio y las descargas incluyen los archivos del port. Las sesiones, los tokens y otros datos del perfil se guardan localmente fuera del repositorio.

## Estado de 1080p

El release conserva la configuración de 720p validada. En el Mac Intel se probaron tanto el modo invitado de 1920×1080 como la salida de 1920×1080 con el modo invitado en 720p. Las dos ejecuciones de prueba fallaron al inicializar gráficos, así que la salida a 1080p queda pendiente de verificación. El XEX 1.1.26 incluye notas sobre el retiro de la opción de transmisión 1080p en 1.1.15. La documentación de Órbita también distingue [salida reescalada y vídeo de origen](https://x360.pistatrack.com/bugs?status=wontfix).
