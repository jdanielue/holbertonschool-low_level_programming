#!/bin/bash
gcc -FPIC -c *.c
wait $!
gcc -shared -o liball.so
