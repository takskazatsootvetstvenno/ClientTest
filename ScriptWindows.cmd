pip install conan
apt-get -y install cmake
if exist build del /F /Q build
mkdir build 
cd build
conan install .. --build missing
cmake .. -G "Visual Studio 16 2019" -DCMAKE_BUILD_TYPE=Release
cmake --build .
