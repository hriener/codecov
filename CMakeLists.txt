cmake_minimum_required(VERSION 3.1)
project(amazing LANGUAGES CXX)

option(ENABLE_COVERAGE "Enable coverage reporting for gcc/clang" OFF)

if (UNIX)
  include(CheckCXXCompilerFlag)
  add_compile_options(-Wall -Wextra -pedantic)
  if (ENABLE_COVERAGE)
    add_compile_options(-O0 -g --coverage -fprofile-arcs -ftest-coverage)
  endif()
endif()

add_subdirectory(include)
add_subdirectory(test)

