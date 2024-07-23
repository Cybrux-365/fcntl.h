#!/bin/bash
echo "compiler -> file name: "
read f
z=$(gcc -o run $f)
w=$(./run)
echo "permission -> file name: "
read x
y=$(chmod 444 $x)
