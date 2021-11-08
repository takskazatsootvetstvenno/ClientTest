pip install conan
apt-get -y install cmake
if exist build del /F build
mkdir build 
cd build
conan install ..
cmake . -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build .