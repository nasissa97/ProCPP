add_library(person_obj OBJECT Person.cpp)

target_precompile_headers(person_obj PUBLIC <iostream>)

target_include_directories(person_obj PUBLIC
 "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
 "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)
# target_include_directories(person_obj PUBLIC include/)

add_library(person_static STATIC)
target_link_libraries(person_static PUBLIC person_obj)


include(ClangFormat)
Format(person_static .)

include(ClangTidy)
AddClangTidy(person_static)

add_executable(person main.cpp)
target_link_libraries(person person_static)

 
