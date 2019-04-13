#!/bin/bash

echo "Class Maker is creating your class..."
echo "Header file creation..."$1".h"
touch include/$1.h
echo "Implementation file creation..."$1".cpp"
touch src/$1.cpp
echo $1".h and "$1".cpp files created!"
