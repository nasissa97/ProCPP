add_library(templates_object 
 STATIC 
 KeyValuePair.cpp 
 KeyValuePair2.cpp 
 concat.cpp
 find.cpp
)

target_include_directories(templates_object PUBLIC .)
 
