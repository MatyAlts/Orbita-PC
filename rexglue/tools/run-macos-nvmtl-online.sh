#!/bin/sh
set -eu
umask 077

tools_dir=$(CDPATH='' cd -- "$(dirname -- "$0")" && pwd)
update_dir="$tools_dir/../out/online-1.1.26"
source_root=${ORBITA_GAME_ROOT:-"$update_dir/game"}
export ORBITA_EXECUTABLE=${ORBITA_EXECUTABLE:-"$update_dir/build/orbita"}

if [ ! -x "$ORBITA_EXECUTABLE" ] || [ ! -f "$source_root/default.xex" ]; then
    printf '%s\n' 'Falta la compilación online o el XEX correspondiente.' >&2
    exit 1
fi

for argument in "$@"; do
    case "$argument" in
        --title.game_root|--title.game_root=*|--game_data_root|--game_data_root=*|--paths.game_data_root|--paths.game_data_root=*|--title.game_writable|--title.game_writable=*|--filesystem.game_mount_flags|--filesystem.game_mount_flags=*)
            printf '%s\n' 'El lanzador online usa su copia privada para guardar la sesión.' >&2
            exit 2
            ;;
    esac
done

# Use a separate copy for each original XEX, preserving its session across launches.
digest=$(shasum -a 256 "$source_root/default.xex")
digest=${digest%% *}
private_root="$HOME/Library/Application Support/Orbita-ReXGlue"
ORBITA_GAME_ROOT="$private_root/$digest"
for directory in "$private_root" "$ORBITA_GAME_ROOT"; do
    if [ -L "$directory" ]; then
        printf '%s\n' 'La ruta privada de Órbita contiene un enlace simbólico.' >&2
        exit 1
    fi
    mkdir -p "$directory"
    chmod 700 "$directory"
done

if [ -L "$ORBITA_GAME_ROOT/default.xex" ]; then
    printf '%s\n' 'El XEX de la copia privada contiene un enlace simbólico.' >&2
    exit 1
fi
if [ ! -e "$ORBITA_GAME_ROOT/default.xex" ]; then
    staged_xex=$(mktemp "$ORBITA_GAME_ROOT/.default.xex.XXXXXX")
    trap 'rm -f "$staged_xex"' EXIT
    cp "$source_root/default.xex" "$staged_xex"
    if ! ln "$staged_xex" "$ORBITA_GAME_ROOT/default.xex" &&
        [ ! -f "$ORBITA_GAME_ROOT/default.xex" ]; then
        exit 1
    fi
    rm -f "$staged_xex"
    trap - EXIT
fi
export ORBITA_GAME_ROOT
exec /bin/sh "$tools_dir/launch-macos-nvmtl.sh" online --title.game_writable=true "$@"
