cmake_minimum_required(VERSION 3.10)
project(Calculator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/Calculator.cpp
)

# Create executable
add_executable(calculator main.cpp ${SOURCES})

# Optional: Enable debug symbols for development
set(CMAKE_BUILD_TYPE Debug)

# Optional: Add compiler warnings
target_compile_options(calculator PRIVATE -Wall -Wextra)
