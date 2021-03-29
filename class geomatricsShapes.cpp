#include<iostream>
using namespace std;
class geomatricsShapes
{
protected:
	char* shapetype;
public:
	geomatricsShapes()
	{
		shapetype = nullptr;
	}
	void setshapetype(char* temp)
	{
		int size = strlen(temp + 1);
		shapetype = new char[size];
		strcpy_s(shapetype, size, temp);
		

	}
	float computeArea()
	{
		
	}
	

	char* getshapetype()
	{
		char* temp;
		int size = strlen(shapetype + 1);
		temp = new char[size];
		strcpy_s(temp, size, shapetype);

		return  temp;
	}
	~geomatricsShapes()
	{
		delete[] shapetype;
		shapetype = nullptr;
	}
};
class rectangle :protected geomatricsShapes
{
protected:
	int length;
	int width;
	float area;
public:
	rectangle()
	{
		length = 0;
		width = 0;
		area = 0;
	}
	void setlength(int l)
	{
		length = l;
	}
	int getlength()
	{
		return length;
	}
	void setwidth(int w)
	{
		width=w;
	}
	int getwidth()
	{
		return width;
	}
	float computeArea()
	{
		area= length * width;
	}
	void show()
	{
		cout << "length =" << length<<"\n";
		cout<< "with =" << width << "\n";
	}
	
};
class cubeid :protected rectangle
{
private:
	int height;
	int area;
	cubeid()
	{
		height = 0;
		area = 0;
	}
	void setheight(int h)
	{
		height= h;
	}
	float getarea()
	{
		return area;
	}
	int getheight()
	{
		return height;
	}
	float computeArea()
	{
		area= length * width*height;
	}
  
};
int main()
{

}