project(AuE-8930-HW2)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++11)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS "${CXX_FLAGS}")

set(SOURCE_FILES_Q1 src/Q1_Vectors.cpp)
set(SOURCE_FILES_Q2 src/Q2_Reference_vs_Value.cpp)

add_executable(Q1_Vectors ${SOURCE_FILES_Q1})
add_executable(Q2_Reference_vs_Value ${SOURCE_FILES_Q2})