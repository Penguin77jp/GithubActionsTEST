cmake_minimum_required(VERSION 3.1)
project(test CXX)

file(GLOB srcFiles
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
)

add_executable(test ${srcFiles})
set_property(TARGET test PROPERTY CXX_STANDARD 20)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)