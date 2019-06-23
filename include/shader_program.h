#include <unistd.h>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <iostream>


#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Shader {
 public:
  GLuint program;
  Shader() {}
  void create(const char* v_path, const char* f_path);
  void use();

};