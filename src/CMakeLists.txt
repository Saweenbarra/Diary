cmake_minimum_required(VERSION 3.0)
project(Diary)

add_executable(Diary Main.cpp)

add_library(
    CSV
    CSV.hpp
    CSV.cpp
)

target_link_libraries(Diary CSV)

add_compile_options(-Wall)