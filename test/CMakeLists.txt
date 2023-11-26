include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
)

# To prevent Windows from overriding parent complier/linker
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests
 person_test.cpp
 "${CMAKE_CURRENT_SOURCE_DIR}/ch10/PersonBaseTest.cpp"
)
target_link_libraries(unit_tests 
  PUBLIC 
  person_static  
  ch10_static
  gtest_main gmock
)

include(GoogleTest)
gtest_discover_tests(unit_tests)

