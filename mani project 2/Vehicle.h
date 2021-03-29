#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Vehicle
{
	char* companyName;
	char* color;
	int numberOfWheels;
	int powerCC;
	char* typeOfVehicle;
public:
	Vehicle();
	Vehicle(Vehicle &obj);
	Vehicle& operator =(Vehicle& obj);
	Vehicle(char* cname, char* co, int nw, int pow, char* tv);
	void setcompanyName(char* cname);
	char* getcompanyName() const;
	void setcolour(char* fcolor);
	char* getcolour() const;
	void setnumberOfWheels(int numberw);
	int getnumberOfWheels() const;
	void setpowerCC(int powerc);
	int getpowerCC()const;
	void setTypeOfVehicle(char* Tvechicle);
	char* getTypeOfVehicle() const;
	virtual void dispaly() const;
	virtual void checkType() = 0;
	~Vehicle();
};
ostream& operator<<(ostream out, Vehicle& obj);
istream& operator>>(istream& in, Vehicle& obj);

