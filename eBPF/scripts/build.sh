#!/bin/bash

clang -O2 -target bpf -c ../src/$1.c -o ../bin/$1.o
