// #include <iostream>

// #define GLEW_STATIC
// #include <GL/glew.h>
// #include <GLFW/glfw3.h>

#include "scene_manager.h"





int main()
{
  SceneManager scene;

  scene.init_window();

  
  
  scene.create_shader();
  scene.create_objects();

  // float vertices[] = {
  //   -0.5f, -0.5f, 0.0f,
  //    0.5f, -0.5f, 0.0f,
  //    0.0f,  0.5f, 0.0f
  // };  

  // GLuint VAO, VBO;
  // glGenVertexArrays(1, &VAO);  
  // glGenBuffers(1, &VBO);  

  // glBindVertexArray(VAO);
  // // std::cout << glGetError() << std::endl; // returns 0 (no error)
  // glBindBuffer(GL_ARRAY_BUFFER, VBO);  
  // glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  // // std::cout << glGetError() << std::endl; // returns 0 (no error)

  // glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  // glEnableVertexAttribArray(0);  

  // std::cout << glGetError() << std::endl; // returns 0 (no error)


  // for (auto i : scene.test1.vertices){
  //   std::cout << i << std::endl;
  // }

  while ( !glfwWindowShouldClose( scene.window ) ){
    glfwPollEvents();

    glClearColor( 0.f, 0.f, 0.f, 1.0f );
    glClear( GL_COLOR_BUFFER_BIT );

    scene.update_frame();
    scene.render_frame();
    scene.process_input();  

    // glUseProgram(scene.stones_shader.program);
    // glBindVertexArray(VAO);
    // glDrawArrays(GL_TRIANGLES, 0, 3);

    glfwSwapBuffers( scene.window );
  }
 
  glfwTerminate();

    
    return 0;
}



