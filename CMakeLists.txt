cmake_minimum_required(VERSION 3.24)
project(ProC++ VERSION 1.0.0 LANGUAGES CXX)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(NoInSourceBuilds)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")



# add_include(NoSourceBuild)

enable_testing()

add_subdirectory(src bin)
add_subdirectory(test)
# add_subdirectory(test)

#include(Install)


