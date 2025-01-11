cmake_minimum_required(VERSION 3.10)
project(MyRaylibProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add raylib source
add_subdirectory(raylib)

# Include raylib headers
include_directories(raylib/src)

# Find OpenGL explicitly for Linux compatibility
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

# Add the executable
add_executable(MyRaylibProject src/main.cpp)

# Link raylib and OpenGL (platform-specific adjustments)
if (UNIX)
    target_link_libraries(MyRaylibProject raylib ${OPENGL_gl_LIBRARY} m dl pthread)
elseif (WIN32)
    target_link_libraries(MyRaylibProject raylib winmm)
endif()
