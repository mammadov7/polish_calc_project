cmake_minimum_required(VERSION 2.8)
project(pol_cal)

include_directories("polish_calc_src")

set(CMAKE_CXX_FLAGS "{CMAKE_CXX_FLAGS} -std=c++11 -Wall -g")

set(SRC_LIST "polish_calc_src/main.cpp")

add_executable(${PROJECT_NAME} ${SRC_LIST} )