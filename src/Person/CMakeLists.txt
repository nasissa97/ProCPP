add_library(person_obj OBJECT Person.cpp)

target_include_directories(person_obj INTERFACE
 "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
 "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

target_precompile_headers(person_obj PUBLIC <iostream>)

add_library(person_static STATIC)
target_link_libraries(person_static person_obj)

include(ClangFormat)
Format(person_static .)

add_executable(person main.cpp)
target_link_libraries(person person_static)

 
