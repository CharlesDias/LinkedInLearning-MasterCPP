cmake_minimum_required(VERSION 3.22)

project(palindrome)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(palindrome src/main.cpp)