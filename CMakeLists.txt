cmake_minimum_required(VERSION 3.14)
project(Graphics)
include_directories("C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/include/")
set(CMAKE_CXX_STANDARD 14)

add_executable(Graphics main.cpp)
target_link_libraries(Graphics libfreeglut.dll.a )