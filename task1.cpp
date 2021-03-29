#include<iostream>
using namespace std;
class Circle
{
private:
	float Area;
	float circumference;
	 const float pi = 3.141;
	float radius;
public:
	Circle()
	{
		Area = 0;
		radius = 0;
	   circumference=0;

	}
	void setradius(float r)
	{
		radius = r;
	}
	float getradius()
	{
		return radius;
	}
	void calculateArea()
	{
		Area = pi * (radius * radius);
	}
	void calculateCircumference()
	{
		circumference = (2 * pi) * radius;
	}
	void dispaly()
	{
		cout << "Area = " << Area<<"\n";
		cout << "Circumference = " << circumference << "\n";
		
	}

};
int main()
{
	float rad;
	cout << "please enter radius of a Circle\n";
	cin >> rad;
	Circle s;
	s.setradius(rad);
	s.calculateArea();
	s.calculateCircumference();
	s.dispaly();
}