cmake_minimum_required(VERSION 3.17)
project(AdventOfCode)

set(CMAKE_C_STANDARD 11)

add_subdirectory(day_01)
add_subdirectory(day_02)

add_custom_target(copy-runtime-files ALL
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/data ${CMAKE_BINARY_DIR}/data
        DEPENDS ${MY_TARGET})