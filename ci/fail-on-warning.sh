#!/usr/bin/env bash

# array join, supports delimiter. Usage: join_by ',' ${array}
function join_by { local d=$1; shift; echo -n "$1"; shift; printf "%s" "${@/#/$d}"; }

# support stdin
FILE="${1:-/dev/stdin}"

# construct exclude array
EXCLUDES=('was built for newer macOS version')
TEXCLUDES="$(join_by '|' "${EXCLUDES[@]}")"

# general search
WARN_NUM=$(grep -i -F 'warning:' "$FILE" | grep -i -c -v -E "${TEXCLUDES}")
if [ "${WARN_NUM}" -gt 0 ]; then
    echo "+++ ${WARN_NUM} warnings detected +++";
    exit 1
fi
