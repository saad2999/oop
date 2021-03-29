#include<iostream>
using namespace std;
class Shape
{
public:
	float area;
	int length;
	float perimeter;
	Shape(float ar=0,int len=0, float per=0)
	{
		area = ar;
		length = len;
		perimeter = per;
	}
	virtual float calarea()=0;
	virtual void setlength(int ) = 0;
	virtual float calperimeter() = 0;

};
class square:public Shape
{
public:
	square(int len)
	{
		length = len;
	}
	void setlength(int l)
	{
		length = l;
	}
	float getlength()
	{
		return length;
	}
	float calarea()
	{
		area = length * length;
		return area;
	}
	float calperimeter()
	{
		perimeter = 4 * length;
		return perimeter;
	}
};
class Rectangle: public Shape
{
private:
	int width;
public:
	Rectangle(int len = 0, int w =0)
	{
		width = w;
		length = len;
	}
	void setlength(int len)
	{
		length = len;
	}
	int getlength()
	{
		return length;
	}
	void setwidth(int wid)
	{
		width = wid;
	}
	int getwidth()
	{
		return width;
	}
	float calarea()
	{
		area = length * width;
		return area;
	}
	float calperimeter()
	{
		perimeter= 2*(length * width);
		return perimeter;
	}
	
	


};
class Trapezium:public Shape
{
private:
	int roof;
	int base;
	int side1;
	int side2;
	int height;
public:
	Trapezium(int len,int roof, int base, int side1, int size2, int height)
	{
		this->roof = roof;
		this->base = base;
		this->side1 = side1;
		this->height = height;
		length = len;
	}
	void setroof(int r)
	{
		roof = r;
	}
	int getroof()
	{
		return roof;
	}
	void setbase(int b)
	{
		base = b;
	}
	int getbase()
	{
		return base;
	}
	void setside1(int s1)
	{
		side1 = s1;
	}
	int getside1()
	{
		return side1;
	}
	void setside2(int s2)
	{
		side2 = s2;
	}
	int getside2()
	{
		return side2;
	}
	void setlength(int len)
	{
		length = len;
	}
	int getlength()
	{
		return length;
	}
	float calarea()
	{
		area = (length + base) / 2 * height;
		return area;
	}
	float calperimeter()
	{
		perimeter =length+base+side1+side2 ;
		return perimeter;
	}


};

int main()
{
	cout << "Square\n\n";
	square s(8);

	cout << "area = " << s.calarea() << "\n";
	cout << "premeter = " << s.calperimeter() << "\n";
	cout << "Rectangle\n\n";
	Rectangle r(2, 6);
	cout << "area = " << r.calarea() << "\n";
	cout << "premeter = " << r.calperimeter() << "\n";
	cout << "Trapezium\n\n";
	Trapezium t(6,5,7,9,8,2);
	cout << "area = " << t.calarea() << "\n";
	cout << "premeter = " << t.calperimeter() << "\n";

	
}