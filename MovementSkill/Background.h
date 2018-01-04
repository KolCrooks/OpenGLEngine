#include "stdafx.h"
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>

using namespace sf;

class background {
private:
	Vector3f CalcGradient(Vector3f start, Vector3f end, float Maxstep, float step);
	Vector3f start = Vector3f(61.0f, 126.0f, 170.0f);
	Vector3f end = Vector3f(255.0f, 228.0f, 122.0f);
	bool up = true;
	double counter = 1;
public:
	void drawColorGradientShift(Time deltaTime);
};