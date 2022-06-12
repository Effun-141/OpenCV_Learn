cmake_minimum_required(VERSION 3.22)
project(20220612)

find_package(OpenCV)

set(CMAKE_CXX_STANDARD 11)

add_executable(20220612 main.cpp)
target_link_libraries(20220612 ${OpenCV_LIBS})