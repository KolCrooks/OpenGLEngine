#pragma once
#include <SFML\Window.hpp>
#include "EventManager.h"
#include "GraphicsManager.h"

using namespace sf;

class logic {
private:
	EventHandeler_Window *WindowEventHandeler = new EventHandeler_Window();
public:
	int Main(Window* window);
};