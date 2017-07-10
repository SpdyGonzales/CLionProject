cmake_minimum_required(VERSION 3.7)
project(CLionProject)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/game.cpp src/graphics.cpp headers/game.h headers/graphics.h src/main.cpp src/main.cpp)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
