/*****************************************************************//**
 * \file   tutorial1.cpp
 * \brief  Main file to render a basic triangle.
 * 
 * \author Shashwat Kashyap<shashwatk1999@gmail.com>
 * \date   September 2023
 *********************************************************************/
#include "../NCLGL/window.h"
#include "Renderer.h"

int main()	{
	Window w("My First OpenGL Triangle!", 1280, 720, false);

	if(!w.HasInitialised()) {
		return -1;
	}
	
	Renderer renderer(w);
	if(!renderer.HasInitialised()) {
		return -1;
	}

	while(w.UpdateWindow()  && !Window::GetKeyboard()->KeyDown(KEYBOARD_ESCAPE)){
		renderer.RenderScene();
		renderer.SwapBuffers();
		if (Window::GetKeyboard()->KeyDown(KEYBOARD_F5)) {
			Shader::ReloadAllShaders();
		}
	}
	return 0;
}