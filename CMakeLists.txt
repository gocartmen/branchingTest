cmake_minimum_required(VERSION 2.8.9)
project(textWriter)

#build type
set(CMAKE_BUILD_TYPE Release)

#include files
add_subdirectory(Classes)

#linking libs
set(PROJECT_LINK_LIBS newClass)

#creating executable
add_executable(textWriter test.cpp)
target_link_libraries(textWriter ${PROJECT_LINK_LIBS})
