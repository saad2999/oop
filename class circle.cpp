#include<iostream>
using namespace std;
class circle {
private:
	const float pi = 3.14;
	float radius ;
	double area;
	float circum;
public:
	circle() 
	{
		radius = 0.0;
		area = 0.0;
		circum = 0.0;
	}
	circle(float r):pi()
	{
		radius = r;
		circum = (2 * pi )* radius;
		area = pi * (radius * radius);
	}
	void setradius(float rad)
	{
		radius = rad;
	}
	float getradius()
	{
		return radius;
	}
	float getpi()
	{
		return pi;
	}
	void calculateCircumANDarea()
	{
		circum = (2 * pi) * radius;
		area = pi * (radius * radius);

	}
	void dispaly()
	{
		cout << "circumference = " << circum << "\n";
		cout << "area = " << area << "\n";
	}
};
int main()
{
	float rad = 0.0;
	cout << "enter radius\n";
	cin >> rad;

	circle obj;
	obj.setradius(rad);
	obj.calculateCircumANDarea();
	obj.dispaly();


}
