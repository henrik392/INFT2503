cmake_minimum_required(VERSION 3.5)

project(Oppgaver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

add_executable(main main.cpp a.cpp b.cpp)

# Copy temperatures.txt to build directory
configure_file(temperatures.txt temperatures.txt COPYONLY)

