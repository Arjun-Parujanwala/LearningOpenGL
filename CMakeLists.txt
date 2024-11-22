cmake_minimum_required(VERSION 3.30)
project(LearningOpenGL)

set(CMAKE_CXX_STANDARD 26)

# Add your source files
add_executable(LearningOpenGL src/main.cpp)

# Find OpenGL and GLFW
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Link the libraries
target_link_libraries(LearningOpenGL OpenGL::GL glfw)

