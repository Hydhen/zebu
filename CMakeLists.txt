cmake_minimum_required(VERSION 3.1.3)

project(zebulator CXX)

include_directories(SYSTEM)

add_executable(
    zebulator
    sources/main.cpp
)
set_property(TARGET zebulator PROPERTY CXX_STANDARD 11)

