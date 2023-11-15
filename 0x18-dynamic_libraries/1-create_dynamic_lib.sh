#!/bin/bash
gcc -pedantic -std=gnu89 -fPIC -c *.c
gcc  -shared *.o  -o liball.so
