#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

// #include <iostream>
#include <vector>
// #include <unistd.h>
// #include <cstddef>
// #include <fstream>
// #include <sstream>

// #define GLEW_STATIC
// #include <GL/glew.h>
// #include <GLFW/glfw3.h>

#include "stone.h"
#include "shader_program.h"

using std::vector;
// namespace fs = std::filesystem;


class SceneManager {
 private:
  std::string get_shader_dir();
 public:
  // start up calls
  void init_window();
  void create_shader();
  void create_objects();

  // per frame calls
  void render_frame();
  void update_frame();
  void process_input();



  
  GLFWwindow* window;
  vector<Stone> stones;
  Shader stones_shader;

};

#endif //SCENEMANAGER_H

