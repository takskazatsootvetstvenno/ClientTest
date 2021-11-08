#!/bin/bash
sudo pip install conan
sudo apt-get -y install cmake
sudo apt-get install libgl1-mesa-dev
rm -r build
mkdir build
cd build
conan install .. --build missing
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release 
cmake --build .
