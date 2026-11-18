#!/bin/sh
set -eu

tools_dir=$(CDPATH='' cd -- "$(dirname -- "$0")" && pwd)
exec /bin/sh "$tools_dir/launch-macos-nvmtl.sh" offline "$@"
