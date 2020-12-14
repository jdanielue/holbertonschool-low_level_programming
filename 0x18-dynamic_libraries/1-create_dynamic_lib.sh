#!/bin/bash
gcc -c *.c -FPIC
wait $!
gcc -shared -o liball.so *.o
