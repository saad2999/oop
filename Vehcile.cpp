#include<iostream>
using namespace std;
class Vehcile
{
public:
	void display()
	{
		cout << "this is Vehcile\n";
	}
};
class car:public Vehcile
{
public:
	void display()
	{
		cout << "this is car\n";
	}


};
class bike:public car
{
public:
	void display()
	{
		cout << "this is bike\n";
	}


};
int main()
{
	Vehcile v;
	v.display();
	car car;
	car.display();
	bike b;
	b.display();
}