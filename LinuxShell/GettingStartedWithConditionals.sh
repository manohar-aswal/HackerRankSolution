#!/bin/sh

read input

if [ $input = 'y' -o $input = 'Y' ];then
    echo "YES"
else 
    echo "NO"
fi
