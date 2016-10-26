cmake_minimum_required(VERSION 3.6)
project(Shapes_v_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Shapes.5.cpp iShapes.cpp iShapes.h)
add_executable(Shapes_v_5 ${SOURCE_FILES})