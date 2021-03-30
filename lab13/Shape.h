#pragma once
#include<iostream>
class Shape
{
protected:
	char* shapeName;
public:
	Shape();
	Shape(char*);
	virtual void area() = 0;
	void setName(char*);
	char* getName();
	virtual~Shape();
	/*because shape is abstrect class we delete ptr*/
};

