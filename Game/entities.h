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

private:
	vec3 position;
	quat orientation;
	vec3 scale;

};