cmake_minimum_required(VERSION 3.0)
project(Diary)
add_executable(Diary ../src/Main.cpp)
set_target_properties(Diary PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../bin/)

add_library(
    txt
    ../src/txt.hpp
    ../src/txt.cpp
)
add_library(
    Opt
    ../src/Option.hpp
    ../src/Option.cpp
)

target_link_libraries(Diary txt Opt)

add_compile_options(-Wall)