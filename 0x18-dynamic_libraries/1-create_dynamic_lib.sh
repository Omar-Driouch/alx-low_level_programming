#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o liball.so
gcc -o 1main main.c -ldynamic -L. -Wl,-rpath=.
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
