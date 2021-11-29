cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_C_FLAGS "-Wall -std=c++17")

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-Wall -std=c++17")

project(randcapz VERSION 1.0)
add_executable(randcapz main.cpp randcapz.cpp)
