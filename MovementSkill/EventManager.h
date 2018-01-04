#pragma once
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>



using namespace sf;

class EventHandeler_Window{
private:
	void closeEvent(Window* window);
	void resizeEvent(Event e, Window * window);
public:
	int HandelEvent_ (Window* window);

};