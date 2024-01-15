#!/bin/bash
wget -O "$HOME/qcustom_rand.so" https://github.com/ShenoudaMikhael/alx-low_level_programming/raw/master/0x18-dynamic_libraries/custom_rand.so
export LD_PRELOAD="$HOME/qcustom_rand.so"
