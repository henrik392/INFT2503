cmake_minimum_required(VERSION 3.5)

project(Oppgaver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

add_executable(2 1.cpp 2.cpp) 
add_executable(3 3.cpp commodity.cpp)
add_executable(4 4.cpp)
