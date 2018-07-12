cmake_minimum_required(VERSION 3.10)
project(machineturing)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/turingmachine/turingmachine.cpp src/turingmachine/turingmachine.hpp src/turingmachine/grammar.cpp src/turingmachine/grammar.hpp)
add_executable(machineturing ${SOURCE_FILES})