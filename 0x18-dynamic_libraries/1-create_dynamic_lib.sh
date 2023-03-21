#!/bin/bash
gcc -g -fPIC -Wall $(ls *.c) -shared -o liball.so
