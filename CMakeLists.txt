cmake_minimum_required(VERSION 3.16)
project(LearningOpenGL)

set(CMAKE_CXX_STANDARD 20)

# Add your source files
add_executable(LearningOpenGL src/main.cpp)

# Add GLAD source file
add_library(glad src/glad.c)

# Find OpenGL and GLFW
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Include directories for GLAD
include_directories(include)

# Link the libraries
target_link_libraries(LearningOpenGL OpenGL::GL glfw glad)


