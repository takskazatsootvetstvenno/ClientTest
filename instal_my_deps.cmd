if exist build del /F build
mkdir build 
cd build
conan install .. --profile msvc16-debug
