#!/bin/sh

read x
read y
read z

if [ $x -eq $y -a $y -eq $z -a $z -eq $x ]; then
    echo "EQUILATERAL"
elif [ $x -eq $y -o $y -eq $z -o $z -eq $x ]; then
    echo "ISOSCELES"
else
    echo "SCALENE"
fi
