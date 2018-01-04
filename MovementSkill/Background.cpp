#include "stdafx.h"
#include "Background.h"

Vector3f background::CalcGradient(Vector3f start, Vector3f end, float Maxstep, float step)
{
	return Vector3f(start.x - (((start.x - end.x) / Maxstep)*step), start.y - (((start.y - end.y) / Maxstep)*step), start.z - (((start.z - end.z) / Maxstep)*step));
}

void background::drawColorGradientShift(Time deltaTime)
{
	if (up)
	{
		counter += (deltaTime.asMilliseconds() / 3);
		if (counter >= 100) up = !up;
	}
	else {
		counter -= (deltaTime.asMilliseconds() / 3);
		if (counter <= 0) up = !up;
	}

	Vector3f tempVec = CalcGradient(start, end, 100, (int)counter);
	//std::cout << "R " << tempVec.x << " G " << tempVec.y << " B " << tempVec.z << std::endl;
	glClearColor(tempVec.x / 225, tempVec.y / 255, tempVec.z / 255, 1.0f);
}
