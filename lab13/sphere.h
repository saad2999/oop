#pragma once
#include "Shape.h"
class sphere :protected Shape
{
protected:
	float area;
	float redius;
	sphere();
	sphere(float a, float red);
	void Area(float);
	void setRedius(float);
	float getRadius();

	~sphere();

};

