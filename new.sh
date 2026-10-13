#!/usr/bin/env bash
# Create a new solution from template.cpp and open it in VS Code.
# Usage: ./new.sh <name>   e.g. ./new.sh weird-algorithm
set -euo pipefail

dir="$(cd "$(dirname "$0")" && pwd)"
name="${1:?usage: ./new.sh <name>}"
file="$dir/${name%.cpp}.cpp"

if [[ -e "$file" ]]; then
    echo "exists: $file"
else
    mkdir -p "$(dirname "$file")"
    cp "$dir/template.cpp" "$file"
    echo "created: $file"
fi

# Line 10 is the blank line inside main().
code -r -g "$file:10:5"
