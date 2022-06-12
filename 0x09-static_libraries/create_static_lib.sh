#!/bin/bash
# this script creates a static library called liball.a from the c files in the current directory

gcc -c *.c
ar rc liball.a *.o
