cmake_minimum_required(VERSION 3.20)

project(robot_project0 LANGUAGES CXX)

add_executable(robot_demo
    src/main.cpp
    src/Robot.cpp
)

target_include_directories(robot_demo
    PRIVATE
    include
)

target_compile_features(robot_demo
    PRIVATE
    cxx_std_20
)

target_compile_options(robot_demo
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)