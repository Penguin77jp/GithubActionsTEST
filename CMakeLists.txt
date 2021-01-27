cmake_minimum_required(VERSION 3.1)
project(testProj CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/stb/)

file(GLOB srcFiles
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_image.h
)

add_executable(testProj ${srcFiles})
set_property(TARGET testProj PROPERTY CXX_STANDARD 20)

install(TARGETS testProj)

enable_testing()
add_test(NAME testProj COMMAND testProj)