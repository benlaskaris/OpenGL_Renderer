#include "scene_manager.h"

// PRIVATE
std::string SceneManager::get_shader_dir() {
    char temp[256];
    std::string path = (getcwd(temp, sizeof(temp)) ? std::string( temp ) : std::string(""));
    std::size_t found = path.find_last_of("/\\");

    std::string shaders = path.substr(0, found) + "/shaders";
    return shaders;
}


// PUBLIC
void SceneManager::init_window() {
    if ( !glfwInit() ) {   
        std::cerr<<"GLFW init failed!"<<std::endl;
        return;
    }

    glfwWindowHint ( GLFW_CONTEXT_VERSION_MAJOR, 3 ); 
    glfwWindowHint ( GLFW_CONTEXT_VERSION_MINOR, 3 ); 
    glfwWindowHint ( GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint ( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    window = glfwCreateWindow ( 1000, 700, "Hello OpenGL", nullptr, nullptr);

    if( window  == nullptr){
        std::cerr << "Failed to create GLFW window"<<std::endl;
        glfwTerminate();

        return;
    }

    glfwMakeContextCurrent( window );

    glewExperimental = GL_TRUE;

    if ( glewInit() != GLEW_OK ){
        std::cerr << "Failed to init GLEW "<<std::endl;
    }
}

void SceneManager::create_shader() {
  // get string path to shader files
  std::string vert_path = get_shader_dir() + "/stones.vert";
  std::string frag_path = get_shader_dir() + "/stones.frag";
  // convert to c strings 
  const char* v_path = vert_path.c_str();
  const char* f_path = frag_path.c_str();

  stones_shader.create(v_path, f_path);
        
}


void SceneManager::create_objects() {

}


void SceneManager::render_frame() {

}

void SceneManager::update_frame() {

}

void SceneManager::process_input() {
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}








