function(AddClangTidy target)
 find_program(CLANG_TIDY clang-tidy REQUIRED)
 set_target_properties(${target}
  PROPERTIES CXX_CLANG_TIDY 
  "${CLANG_TIDY};-checks=*;"
  )
endfunction()
