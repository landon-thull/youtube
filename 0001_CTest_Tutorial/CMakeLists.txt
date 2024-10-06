cmake_minimum_required(VERSION 3.28)

set(C_STANDARD 99)
set(C_STANDARD_REQUIRED ON)

project(CTest_Tutorial LANGUAGES C)

add_library(adder adder.c)

enable_testing()

add_subdirectory(test)