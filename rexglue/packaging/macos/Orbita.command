#!/bin/sh
set -eu
root=$(CDPATH='' cd -- "$(dirname -- "$0")" && pwd)
export ORBITA_EXECUTABLE="$root/runtime/orbita"
export ORBITA_GAME_ROOT="$root/game"
export ORBITA_NVMTL_SHIM="$root/runtime/orbita-nvmtl.dylib"
exec "$root/rexglue/tools/run-macos-nvmtl-online.sh" "$@"
