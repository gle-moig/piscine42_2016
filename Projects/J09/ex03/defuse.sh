#!/bin/bash
tps=`stat -t %X -t %s -f %a bomb.txt`
echo $tps "- 1" | bc