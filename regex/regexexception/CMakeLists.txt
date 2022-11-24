cmake_minimum_required(VERSION 3.5)

project(regexexception LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(regexexception main.cpp)

install(TARGETS regexexception
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
