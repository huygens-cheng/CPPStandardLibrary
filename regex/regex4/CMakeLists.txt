cmake_minimum_required(VERSION 3.5)

project(regex4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(regex4 main.cpp)

install(TARGETS regex4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
