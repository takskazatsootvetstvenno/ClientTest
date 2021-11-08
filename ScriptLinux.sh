#!/bin/bash
pip install conan
apt-get -y install cmake
apt-get install libgl1-mesa-dev
rm -r build
mkdir build
cd build
conan install .. --build missing
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release 
cmake --build .
