#ifndef STONE_H
#define STONE_H

#include <iostream>
#include <vector>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

using std::vector;


// TODO -- add create functions and draw the sucker 
class Stone {
public:
  GLuint VAO, VBO, EBO;
  vector<int> vertices, indices;

  glm::vec2 pos;
  static const float width = 5.0f;

  void init(int x, int y);
  void draw();
  void update();

 
};

#endif //STONE_H
