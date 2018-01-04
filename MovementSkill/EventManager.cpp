#include "stdafx.h"
#include "EventManager.h"

int EventHandeler_Window::HandelEvent_(Window* window)
{
	Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed) EventHandeler_Window::closeEvent(window);
		if (event.type == sf::Event::Resized) EventHandeler_Window::resizeEvent(event,window);
	}
	return -1;
}


void EventHandeler_Window::closeEvent(Window* window) {

		window->close();
}

void EventHandeler_Window::resizeEvent(Event e, Window* window) {

	glViewport(0, 0, e.size.width, e.size.height);
}