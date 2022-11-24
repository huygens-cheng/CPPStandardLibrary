cmake_minimum_required(VERSION 3.5)

project(regexreplace1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(regexreplace1 main.cpp)

install(TARGETS regexreplace1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
