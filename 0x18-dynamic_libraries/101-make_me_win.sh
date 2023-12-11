#!/bin/bash 
wget -P /tmp https://github.com/AbdellahElasy/alx-low_level_programming/row/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
