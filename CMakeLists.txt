cmake_minimum_required(VERSION 4.0.2)

project(CashMemo)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# List source files
set(SRC_FILES
    main.cpp
    cashmemo.cpp
    date.cpp
    address.cpp
)

# Include header directory (project root)
include_directories(${CMAKE_SOURCE_DIR})

# Define the executable target
add_executable(CashMemo ${SRC_FILES})