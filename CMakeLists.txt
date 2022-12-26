cmake_minimum_required(VERSION 3.10)

# set the project name
project(Cogamer VERSION 0.0.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# add the executable
add_executable(Cogamer src/NullPath.cpp src/MainPark.cpp)
