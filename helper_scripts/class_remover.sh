#!bin/bash

echo "Class remover will remove" $1
rm include/$1.h
echo "Header "$1".h removed!"
rm src/$1.cpp
echo "Implementation "$1".cpp removed!"
echo "Class "$1" removed!"
