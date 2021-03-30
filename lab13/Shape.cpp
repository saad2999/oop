#include "Shape.h"

Shape::Shape()
{
	shapeName = nullptr;

}

Shape::Shape(char* name)
{
	int len = strlen(name);
	len = len + 1;
	shapeName= new char[len];
	strcpy_s(shapeName, len, name);

}

void Shape::setName(char* name)
{
	int len = strlen(name);
	len = len + 1;
	shapeName = new char[len];
	strcpy_s(shapeName, len, name);

}

char* Shape::getName()
{
	char* name = nullptr;
	int len = strlen(shapeName);
	len = len + 1;
	name = new char[len];
	strcpy_s(name, len,shapeName );

	return name;
}

 Shape::~Shape()
{
	delete[] shapeName;
	shapeName = nullptr;
}
