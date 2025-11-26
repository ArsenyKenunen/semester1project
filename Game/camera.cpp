#include "header.h"

camera::camera(float aRatio, float fLength)
{
    aspectRatio = aRatio;
    focalLength = fLength;
}

void camera::set(const vec3& lookAt)
{
    gluLookAt(position.x, position.y, position.z,  // camera position
        lookAt.x, lookAt.y, lookAt.z,  // where the camera is pointed in absolute coordinates
        0.0, 1.0, 0.0);
}

void camera::resize(float newRatio, float newLength)
{

}

