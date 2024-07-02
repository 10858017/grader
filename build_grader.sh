#!/bin/sh
git pull
mkdir build
cd ./build
cmake ../ && make
mv ./runGrader ../runGrader
