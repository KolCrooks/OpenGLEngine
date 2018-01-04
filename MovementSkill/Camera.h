#include "stdafx.h"
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>
#include <gl\GLU.h>

using namespace sf;

class camera {
private:
	void calcView();

public:
	int yaw = 0;
	int pitch = 90;
	int roll = 0;
	int fov = 90;
	void pan(float Degree);
	void tilt(float Degree);
	void Roll(float Degree);
	void lookAt(Vector3f playerPos, Vector3f position);
	void update(Time deltaTime);

	camera();
};
