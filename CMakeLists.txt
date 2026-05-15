cmake_minimum_required(VERSION 3.10)

project(CoreBanking)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(core_banking
    src/main.cpp
)
