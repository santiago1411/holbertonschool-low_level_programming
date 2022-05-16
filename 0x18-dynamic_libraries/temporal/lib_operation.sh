#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o 100-operations.so *.o
