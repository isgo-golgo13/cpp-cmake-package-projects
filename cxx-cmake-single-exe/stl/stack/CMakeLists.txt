cmake_minimum_required(VERSION 3.20)
project (stack_template)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(includes)

add_executable(stack_caller stack_caller.cpp includes/stack.hpp)


