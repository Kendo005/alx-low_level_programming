#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -o liball.so -shared
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
