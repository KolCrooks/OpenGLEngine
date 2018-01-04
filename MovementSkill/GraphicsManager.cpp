#include "stdafx.h"
#include "GraphicsManager.h"


void GraphicsManager::Update(Time deltaTime)
{
	// clear the buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);





	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();

	
	//gluPerspective(90.f, 1.f, 1.f, 300.0f);//fov, aspect, zNear, zFar



	


	//display graphics
	window->display();
}

GraphicsManager::GraphicsManager(Window* window)
{
	GraphicsManager::window = window;
//	GraphicsManager::Camera = new Camera(window);
}


