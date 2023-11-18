#!/bin/bash

#chmod +x cleanup_script.sh
#to allow script to run

# Delete 'bin' directory if it exists
if [ -d bin ]; then
    rm -r bin
fi

# Delete 'lib' directory if it exists
if [ -d lib ]; then
    rm -r lib
fi

# Delete 'build' directory if it exists
if [ -d build ]; then
    rm -r build
fi

echo "Cleanup complete."