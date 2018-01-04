// MovementSkill.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Settings.h"
#include "Logic.h"


using namespace sf;

settingsFile GameSettings;
Window* GameWindow;
bool USE_FILE_GEN_SETTINGS = false;

int main()
{
	//Setup Settings
	settings *Settings = new settings();
	if (!USE_FILE_GEN_SETTINGS)
		GameSettings = Settings->generateSettings();
	else
		GameSettings = Settings->getSettingsFromFile();

	//Setup Window
	Window GameWindow(sf::VideoMode(GameSettings.Window_W, GameSettings.Window_H), "GameDev");

	
	//Setup Game Logic
	logic *GameLogic = new logic();
	GameLogic->Main(&GameWindow);


    return 0;
}

