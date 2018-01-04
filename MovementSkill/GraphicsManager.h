#include "stdafx.h"
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>
#include <gl\GLU.h>
#include <iostream>

using namespace sf;

class GraphicsManager {

private:
	Window* window;

public:
	void Update(Time deltaTime);
	GraphicsManager(Window * window);

};