#!/bin/bash
gcc -c *.c 
wait $!
ar -rs liball.a *.o
