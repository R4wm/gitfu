#!/bin/bash

echo -e "running git submodule sync\n"
git submodule sync || {
    echo "Failed to sync IS2 lib"
    exit 1
}

echo -e "running git submodule update -f --init\n"
git submodule update -f --init
