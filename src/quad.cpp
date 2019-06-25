#include "quad.h"

void Quad::init(float x, float y) {
  // pos.push_back(x);
  // pos.push_back(y);
  pos.x = x;
  pos.y = y;

  glGenVertexArrays(1, &VAO);  
  glGenBuffers(1, &VBO);  
  glGenBuffers(1, &EBO);  
}

void Quad::create_vertices() {
  vertices = {
    pos[0] - width/2.0f, pos[1] - width/2.0f, 0.0f, // bottom left
    pos[0] - width/2.0f, pos[1] + width/2.0f, 0.0f, // top left
    pos[0] + width/2.0f, pos[1] + width/2.0f, 0.0f, // top right
    pos[0] + width/2.0f, pos[1] - width/2.0f, 0.0f // bottom right
  };

  indices = {
    0, 1, 2,
    0, 2, 3
  };
}

void Quad::draw() {
  glBindVertexArray(VAO);
  glEnableVertexAttribArray(0);  
  glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0); 
}

void Quad::update() {
  glBindVertexArray(VAO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);  
  glBufferData(GL_ARRAY_BUFFER, sizeof(float)* vertices.size(), vertices.data(), GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0); 

  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(float)* indices.size(), indices.data(), GL_STATIC_DRAW); 




   

}