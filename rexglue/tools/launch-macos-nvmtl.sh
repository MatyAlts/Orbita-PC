#!/bin/sh
set -eu

mode=$1
shift

tools_dir=$(CDPATH='' cd -- "$(dirname -- "$0")" && pwd)
project_dir=$(dirname "$tools_dir")
executable=${ORBITA_EXECUTABLE:-"$project_dir/out/mac-amd64/orbita"}
game_root=${ORBITA_GAME_ROOT:-"$project_dir/../orbita-1.1.0-XEX/orbita"}
if [ ! -x "$executable" ] || [ ! -f "$game_root/default.xex" ]; then
    printf '%s\n' 'Falta el ejecutable de Órbita o el XEX original.' >&2
    exit 1
fi

profile=$(mktemp -d "${TMPDIR:-/tmp}/orbita-$mode.XXXXXX")
shim=${ORBITA_NVMTL_SHIM:-}
if [ -z "$shim" ]; then
    shim="$profile/orbita-nvmtl.dylib"
    xcrun clang -fobjc-arc -dynamiclib -framework Foundation -framework Metal \
        "$tools_dir/nvmtl-shaders.m" -o "$shim"
elif [ ! -f "$shim" ]; then
    printf '%s\n' 'Falta la biblioteca de compatibilidad NVMTL.' >&2
    exit 1
fi
printf 'Registro del arranque: %s/logs\n' "$profile"

set -- "$shim" "$executable" --title.game_root="$game_root" \
    --app.user_root="$profile/user" --app.log_root="$profile/logs" \
    --ui.fullscreen=false --gpu.xenos.native_2x_msaa=false \
    --gpu.xenos.async_shader_compilation=false "$@"

launch='
    export DYLD_INSERT_LIBRARIES="$1"
    export MVK_CONFIG_USE_METAL_ARGUMENT_BUFFERS=0 MVK_CONFIG_FAST_MATH_ENABLED=1
    shift
    exec "$@"
'

case "$mode" in
    offline)
        # Set DYLD_INSERT_LIBRARIES after entering the sandbox.
        exec /usr/bin/sandbox-exec -p '(version 1) (allow default) (deny network*)' \
            /bin/sh -c "$launch" orbita-offline "$@"
        ;;
    online)
        exec /bin/sh -c "$launch" orbita-online "$@"
        ;;
    *)
        printf '%s\n' 'Modo de arranque inválido.' >&2
        exit 2
        ;;
esac
