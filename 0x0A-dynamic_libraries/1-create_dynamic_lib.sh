#!/bin/bash
# this script creates a dynamic library called liball.so from the c files in the current directory

gcc -c -fPIC *.c
gcc *o -shared -o liball.so
