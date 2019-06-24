#include "stone.h"

void Stone::init(float x, float y) {
  pos.x = x;
  pos.y = y;

  glGenVertexArrays(1, &VAO);  
  glGenBuffers(1, &VBO);  
  glGenBuffers(1, &EBO);  
}

void Stone::create_vertices() {
  vertices = {
    pos.x - width/2.0f, pos.y - width/2.0f, 0.0f, // bottom left
    pos.x - width/2.0f, pos.y + width/2.0f, 0.0f, // top left
    pos.x + width/2.0f, pos.y + width/2.0f, 0.0f, // top right
    pos.x + width/2.0f, pos.y - width/2.0f, 0.0f // bottom right
  };


  // vertices = verts;

  indices = {
    0, 1, 2,
    0, 2, 3
  };

  // indices = inds;
}

void Stone::draw() {
  // std::cout << "Drawing" << std::endl;
  glBindVertexArray(VAO);
  glEnableVertexAttribArray(0);  
  // glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0); // this is the line causing a bug 
  glDrawArrays(GL_TRIANGLES, 0, 3);

  // std::cout << glGetError() << std::endl; // returns 0 (no error)


}

void Stone::update() {
  glBindVertexArray(VAO);
  // std::cout << glGetError() << std::endl; // returns 0 (no error)

  glBindBuffer(GL_ARRAY_BUFFER, VBO);  
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), &vertices, GL_STATIC_DRAW);
  // std::cout << glGetError() << std::endl; // returns 0 (no error)

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  // std::cout << glGetError() << std::endl; // returns 0 (no error)

  glEnableVertexAttribArray(0); 

  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), &indices, GL_STATIC_DRAW); 
  // std::cout << glGetError() << std::endl; // returns 0 (no error)

   

}