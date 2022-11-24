cmake_minimum_required(VERSION 3.5)

project(regextokeniter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(regextokeniter main.cpp)

install(TARGETS regextokeniter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
