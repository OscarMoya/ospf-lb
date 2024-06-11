#!/bin/bash

bpftool prog load ../bin/$1.o /sys/fs/bpf/$1