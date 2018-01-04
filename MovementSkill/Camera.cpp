#include "stdafx.h"
#include "Camera.h"


camera::camera()
{
	//gluPerspective(fov, 1.f, 0.01f, 300.0f);//fov, aspect, zNear, zFar
}

void camera::pan(float Degree)
{
	camera::yaw += Degree;
}

void camera::tilt(float Degree)
{
	camera::pitch += Degree;
}

void camera::Roll(float Degree)
{
	camera::roll += Degree;
}

void camera::lookAt(Vector3f playerPos, Vector3f atPos)
{


}

void camera::update(Time deltaTime)
{
	//gluLookAt(playerPos.x, playerPos.y, playerPos.z, atPos.x, atPos.y, atPos.z, 0, -1, 0);
}

void camera::calcView() {

}


