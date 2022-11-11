cmake_minimum_required(VERSION 3.22)
project(TinySTL)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/TinySTL/*.h)

add_executable(${CMAKE_PROJECT_NAME} main.cpp ${SRC_FILES})
