cmake_minimum_required(VERSION 3.12)
project(SubmoduleTest)

include_directories("deps/fmt/include")

add_subdirectory(deps)
add_subdirectory(src)
