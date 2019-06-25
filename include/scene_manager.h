#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include <vector>

#include "quad.h"
#include "shader_program.h"
// #include "render_matrices.h"

using std::vector;

// TODO -- add virutal Drawable Base class? 

class SceneManager {
 private:
  std::string get_shader_dir();
  // window specs
  float WINDOW_WIDTH = 1000.0f;
  float WINDOW_HEIGHT = 700.0f;
  float FOV = 45.0f;
  glm::vec3 cameraPos = glm::vec3(0.0, 0.0, 0.0);
  // RM rm;
  glm::mat4 ModelMatrix;
  glm::mat4 ViewMatrix;
  glm::mat4 ProjectionMatrix;

 public:
  // start up calls
  void init_window();
  void create_shader();
  void create_objects();
  void create_matrices();

  // per frame calls
  void render_frame();
  void update_frame();
  void process_input();
  void update_shaders();
  
  GLFWwindow* window;
  Shader basic_shader;
  Quad test1;

};

#endif //SCENEMANAGER_H

