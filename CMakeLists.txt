cmake_minimum_required(VERSION 3.7)
project(CLionProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/game.cpp src/graphics.cpp headers/game.h headers/graphics.h src/main.cpp src/main.cpp)
add_executable(CLionProject ${SOURCE_FILES})


