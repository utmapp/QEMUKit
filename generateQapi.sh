#!/bin/sh

command -v realpath >/dev/null 2>&1 || realpath() {
    [[ $1 = /* ]] && echo "$1" || echo "$PWD/${1#./}"
}

# Printing coloured lines
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

QEMUDIR="$1"
BASEDIR="$(dirname "$(realpath $0)")"
GA_APIS="$QEMUDIR/qga/qapi-schema.json"
APIS="$QEMUDIR/qapi/qapi-schema.json"

if [ ! -f "$GA_APIS" ] || [ ! -f "$APIS" ]; then
    echo "usage: generateQapi.sh QEMUDIR"
    echo "  QEMUDIR  Path to QEMU source directory"
    exit 1
fi

echo "${GREEN}Generating qapi sources from ${APIS}...${NC}"
python3 "$BASEDIR/Tools/qapi-gen.py" -b -o "$BASEDIR/Sources/QEMUKitInternal/External/qapi" "$APIS"
echo "${GREEN}Generating guest agent sources from ${GA_APIS}...${NC}"
python3 "$BASEDIR/Tools/qapi-gen.py" -p 'qga-' -o "$BASEDIR/Sources/QEMUKitInternal/External/qga" "$GA_APIS"
