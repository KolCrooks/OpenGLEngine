#include "stdafx.h"
#include "Logic.h"

int logic::Main(Window* window)
{
	printf("Logic starting");
	GraphicsManager* graphics = new GraphicsManager(window);
	Clock clock;

	window->setActive(true);


	// run the program as long as the window is open
	while (window->isOpen())
	{
		Time deltaTime = clock.restart();


		graphics->Update(deltaTime);
		
		//At end of loop run event handeler
		WindowEventHandeler->HandelEvent_(window);
	}
	return 0;
}
