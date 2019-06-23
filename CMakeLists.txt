cmake_minimum_required (VERSION 3.14)
project (Renderer)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 3.3 REQUIRED)
find_package(glm REQUIRED)


include_directories(${OPENGL_INCLUDE_DIR} ${GLEW_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include)


add_executable(Renderer
    src/main.cpp
    src/scene_manager.cpp
    src/stone.cpp
    src/shader_program.cpp
)

target_link_libraries(Renderer ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} glfw glm)