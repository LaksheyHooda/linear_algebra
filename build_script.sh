#!/bin/bash

#chmod +x build_script.sh
#to allow the script to run

# Create a 'build' directory if it doesn't exist
mkdir -p build

# Change to the 'build' directory
cd build

# Run CMake with specified options
cmake -DCMAKE_BUILD_TYPE=Debug -DRUN_COV=false ..

# Run 'make' with multiple jobs
make -j4

# Run 'make function_tests'
make function_tests
