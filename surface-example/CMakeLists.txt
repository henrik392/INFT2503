cmake_minimum_required(VERSION 3.5)

project(Surface Class Example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

add_executable(main surface_test.cpp surface.cpp)

