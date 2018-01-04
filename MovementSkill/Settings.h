//This file reads a settings txt file in order to save and use settings
#pragma once
#include <string>
#include <iostream>
#include <istream>
#include <fstream>
#include <vector>
#include <sstream>
#include <windows.h>

using namespace std;

struct settingsFile {
		int Window_H;
		int Window_W;
		int Frame_Rate;
		int FullScreen;
};

class settings {
private:
	int readfile(string setting);
	vector<string> split(const string &s, char delim);
public:
	settingsFile getSettingsFromFile();
	settingsFile generateSettings();

};