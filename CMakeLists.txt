cmake_minimum_required(VERSION 3.10)

 set(PROJECT_NAME ClientTest)
 project(${PROJECT_NAME})

 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()
 
 add_executable(clientTest main.cpp)
 target_link_libraries(clientTest ${CONAN_LIBS})