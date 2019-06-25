
#include "scene_manager.h"

int main()
{
  SceneManager scene;

  scene.init_window();
  scene.create_shader();
  scene.create_objects();

  while ( !glfwWindowShouldClose( scene.window ) ){
    glfwPollEvents();

    glClearColor( 0.f, 0.f, 0.f, 1.0f );
    glClear( GL_COLOR_BUFFER_BIT );

    scene.update_frame();
    scene.render_frame();
    scene.process_input();  

    glfwSwapBuffers( scene.window );
  }
 
  glfwTerminate();
 
    return 0;
}



