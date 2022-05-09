#!/bin/bash


gcc -shared -o sho.so sho.c
gcc -o my_prog.exe my_prog.c mod2.c mod3.c sho.so
