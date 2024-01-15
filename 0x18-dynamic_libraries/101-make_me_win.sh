#!/bin/bash
wget https://github.com/ShenoudaMikhael/alx-low_level_programming/blob/master/0x18-dynamic_libraries/custom_rand.so
export LD_PRELOAD=./custom_rand.so 