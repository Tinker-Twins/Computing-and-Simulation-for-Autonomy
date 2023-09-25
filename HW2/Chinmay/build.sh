#!/bin/bash
# Script to build (compile) the project.
# Clean existing build using "clean.sh".

# Go into the directory where this bash script is contained.
cd `dirname $0`

# Build (compile) the project and store output in the dedicated `build` directory.
mkdir -p build
cd build
cmake .. && make
cd ..

echo Project Built