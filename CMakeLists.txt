cmake_minimum_required(VERSION 3.24)
project(ProC++ VERSION 1.0.0 LANGUAGES CXX)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(NoInSourceBuilds)



# add_include(NoSourceBuild)

enable_testing()

add_subdirectory(src bin)
add_subdirectory(test)
# add_subdirectory(test)

#include(Install)


