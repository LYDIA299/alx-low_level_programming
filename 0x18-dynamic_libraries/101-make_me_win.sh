#!/bin/bash
gcc -shared -o print_out.so -fPIC print_out.c
LD_PRELOAD=./print_out.so
