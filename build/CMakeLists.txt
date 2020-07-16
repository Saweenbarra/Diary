cmake_minimum_required(VERSION 3.0)
project(Diary)
add_executable(Diary ../src/Main.cpp)
set_target_properties(Diary PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../bin/)

add_library(
    CSV
    ../src/CSV.hpp
    ../src/CSV.cpp
)

target_link_libraries(Diary CSV)

add_compile_options(-Wall)