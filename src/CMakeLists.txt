# CMAKE BUILD FILE BY bariscodefx
cmake_minimum_required(VERSION 3.16.3)

# project name
project(XOX VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# main
add_executable(${PROJECT_NAME} xox.c)

# add libraries
add_subdirectory(common)
target_link_libraries(${PROJECT_NAME} PUBLIC util)
