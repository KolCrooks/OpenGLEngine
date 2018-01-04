#include "stdafx.h"
#include "Settings.h"

settingsFile settings::getSettingsFromFile()
{
	settingsFile tempfile;
	tempfile.Window_H = 0;
	tempfile.Window_W = 0;
	tempfile.FullScreen = false;
	return tempfile;
}

settingsFile settings::generateSettings()
{
	settingsFile tempfile;
	tempfile.Window_H = GetSystemMetrics(SM_CYSCREEN);
	tempfile.Window_W = GetSystemMetrics(SM_CXSCREEN);
	tempfile.FullScreen = false;
	return tempfile;
}

int settings::readfile(string setting) {
	ifstream settingstream;
	settingstream.open("Settings.txt");
	string line = "";

	if (settingstream.is_open()) {
		while (getline(settingstream, line)) {

			char *S_ = (char*)line.c_str();

		}
	}

	settingstream.close();

	return 0;
}

vector<string> settings::split(const string &s, char delim) {
	stringstream ss(s);
	string item;
	vector<string> tokens;
	while (getline(ss, item, delim)) {
		tokens.push_back(item);
	}
	return tokens;
}