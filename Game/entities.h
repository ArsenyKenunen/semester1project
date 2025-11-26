#pragma once

#include "glm-master\glm\glm.hpp"
#include "glm-master\glm\ext.hpp"
using glm::vec3;
using glm::quat;
using glm::normalize;
using glm::angleAxis;
using glm::radians;

#include <vector>


class S3Dobject
{
public:
	void moveAbsolute(const vec3& dr);
	void moveRelative(const vec3& dr);
	void rotateAbsolute(float angle, const vec3& axis);
	void rotateRelative(float angle, const vec3& axis);

protected:
	vec3 position;
	quat orientation;
	vec3 scale;

};

class camera : public S3Dobject
{
public:

	camera(float aRatio, float fLength);
	void set(const vec3& lookAt);
	void resize(float newRatio, float newLength);

private:
	float aspectRatio;
	float focalLength;

};

class player : public S3Dobject
{

};