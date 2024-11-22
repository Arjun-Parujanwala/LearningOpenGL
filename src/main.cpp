#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

//test

int main() {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW!" << std::endl;
        return -1;
    }

    // Create a GLFW windowed context
    GLFWwindow* window = glfwCreateWindow(800, 600, "GLAD + GLFW3 Check", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window!" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Make the OpenGL context current
    glfwMakeContextCurrent(window);

    // Initialize GLAD to load OpenGL functions
    if (!gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress))) {
        std::cerr << "Failed to initialize GLAD!" << std::endl;
        return -1;
    }

    // Print OpenGL version to verify GLAD is working
    std::cout << "OpenGL version: " << glGetString(GL_VERSION) << std::endl;

    // Main rendering loop
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

        glfwSwapBuffers(window);       // Swap buffers to display the result
        glfwPollEvents();              // Poll events (e.g., keyboard or mouse input)
    }

    // Clean up and terminate
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}

