cmake_minimum_required(VERSION 3.10)
project(GeometryDash)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add raylib source
add_subdirectory(raylib)

# Include raylib headers
include_directories(raylib/src)

# Add the executable
add_executable(GeometryDash src/main.cpp)

# Link raylib library
target_link_libraries(GeometryDash raylib)

# Platform-specific settings
if (UNIX) # Linux specific settings
    target_link_libraries(GeometryDash m dl pthread GL)
elseif (WIN32)
    target_link_libraries(GeometryDash winmm)
endif()
