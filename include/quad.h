#ifndef QUAD_H
#define QUAD_H

#include <iostream>
#include <vector>

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "drawable.h"

using std::vector;


// TODO -- add create functions and draw the sucker 
class Quad: public Drawable {
public:
  GLuint VAO, VBO, EBO;
  vector<float> vertices;
  vector<int> indices;
  glm::vec2 pos;
  // vector<float> pos;
  const float width = 1.0f;

  void init(float x, float y);
  void create_vertices();
  void draw() override;
  void update() override;

 
};

#endif //STONE_H
