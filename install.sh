#!/bin/bash

# Exit if something fails
set -e

cd "$(realpath "$(dirname "$0")")"

if [[ -z "$XDG_DATA_HOME" ]]; then
    prefix=~/.local/share
else
    prefix="$XDG_DATA_HOME"
fi

mkdir -p $prefix/krunner/dbusplugins/
mkdir -p $prefix/dbus-1/services/

cp plasma-runner-krunnercurrency.desktop $prefix/krunner/dbusplugins/
sed "s|/home/moon/Projects/python/krunnercurrency/krunnercurrency.py|${PWD}/krunnercurrency.py|" "org.kde.krunnercurrency.service" > $prefix/dbus-1/services/org.kde.krunnercurrency.service

kquitapp6 krunner 2>/dev/null

