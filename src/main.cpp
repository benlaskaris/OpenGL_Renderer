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

    while ( !glfwWindowShouldClose( scene.window ) ){
      glfwPollEvents();

      glClearColor( 0.23f, 0.38f, 0.47f, 1.0f );
      glClear( GL_COLOR_BUFFER_BIT );

      scene.render_frame();
      scene.update_frame();
      scene.process_input();  

      glfwSwapBuffers( scene.window );
    }
 
  glfwTerminate();

    
    return 0;
}


