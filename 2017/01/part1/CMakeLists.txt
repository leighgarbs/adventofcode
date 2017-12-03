project(aoc1p1)

# CMake 2.6 is the oldest version of CMake that still has documentation
# available online
cmake_minimum_required(VERSION 2.6)

# Include common project setup
include(${CMAKE_CURRENT_LIST_DIR}/../../../cmake/ProjectCommon.cmake)

add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}.cpp)
