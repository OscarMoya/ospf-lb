#!/bin/bash

bpftool prog detach id $(bpftool prog show | grep $1 | awk '{print $1}') /sys/fs/bpf/$1