cmake_minimum_required(VERSION 3.1.0)

SET (CMAKE_AUTOMOC ON)

INCLUDE_DIRECTORIES(catch.hpp)

project(travis)

find_package(Qt5 COMPONENTS Core REQUIRED)

set (SOURCES main.cpp base.cpp)

add_executable(travis ${SOURCES})

target_link_libraries(travis Qt5::Core)