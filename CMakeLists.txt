cmake_minimum_required(VERSION 3.25)
project(MyFirstGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyFirstGame main.cpp game.cpp game.h)
