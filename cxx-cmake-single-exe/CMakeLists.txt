cmake_minimum_required(VERSION 3.10)

project(cpp_svc)
add_executable(cpp_svc main.cpp)
target_compile_features(cpp_svc PUBLIC cxx_std_17)
target_compile_options(cpp_svc PRIVATE -std=c++17)
