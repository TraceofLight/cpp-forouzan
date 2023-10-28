cmake_minimum_required(VERSION 3.0)
project(chapter11-1
    VERSION 1.0.0
    LANGUAGES CXX
)

set(SOURCES
    prg11-3.cpp
    prg11-5.cpp
    prg11-6.cpp
)

set(HEADERS
    prg11-2.hpp
    prg11-4.hpp
)

add_executable(program01.exe ${SOURCES} ${HEADERS})