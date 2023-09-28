/*****************************************************************//**
 * \file   Renderer.h
 * \brief  Header file for the renderer.
 * 
 * \author Shashwat Kashyap<shashwatk1999@gmail.com>
 * \date   September 2023
 *********************************************************************/
#pragma once
#include "../nclgl/OGLRenderer.h"

class Renderer : public OGLRenderer {
public:
	Renderer(Window& parent);
	virtual ~Renderer(void);
	virtual void RenderScene();

protected:
	Mesh*	triangle;
	Shader* basicShader;
};