add_library(ch10_obj 
  OBJECT 
  src/PersonBase.cpp
  src/Employee.cpp
  src/Manager.cpp
  src/Director.cpp
)

target_include_directories(ch10_obj PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

add_library(ch10_static STATIC)
target_link_libraries(ch10_static PUBLIC ch10_obj)

include(ClangFormat)
Format(ch10_static .)

include(ClangTidy)
AddClangTidy(ch10_static)
