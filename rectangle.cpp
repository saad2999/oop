#include<iostream>
using namespace std;
class ractangle
{
protected:
	int height;
	int width;
public:
	ractangle()
	{
		height = 0;
		width = 0;
	}

	ractangle(int h, int w)
	{
		height = h;
		width = w;
	}
	int gethight()
	{
		return height;
	}
	int getwidth()
	{
		return width;
	}
	void display()
	{
		cout << "height = " << height<<"\n";
		cout << "width = " << width << "\n";
		
	}
	
};
class Area:protected ractangle
{
private:
	int area;
public:
	Area()
	{
		int area = 0;
	}
	int hi;
	int wi;
	void calarea()
	{
		 
		area = height * width;

	}
	void display()
	{
		cout << "area = " << area << "\n";
	 }
	

};
int main()
{
	int h=0, w=0;
	cout << "enter hight\n";
	cin >> h;
	cout << "enter width\n";
	cin >> w;
	ractangle r(h, w);
	r.display();
	Area av;
	av.calarea();
	av.display();
	

}