#!/bin/bash
build() {
  mkdir -p build
  bPath=./build/$1.exe

  for f in src/*.cpp ./$1.cpp; do
    g++ -c $f -o build/"${f##*/}".o
  done

  g++ -o $bPath build/*.o
  $bPath
}

build $1