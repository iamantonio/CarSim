cmake_minimum_required(VERSION 3.22)
project(CarSim)

set(CMAKE_CXX_STANDARD 17)

add_executable(CarSim main.cpp Vehicle.cpp Vehicle.h Car.cpp Car.h)
