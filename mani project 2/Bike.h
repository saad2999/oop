#pragma once
#include "Vehicle.h"
class Bike :public Vehicle
{
	double height;
	bool selfstart;
	bool discbreak;
	static int numberofbikes;
public:
	Bike();
	Bike(double localHeight, bool Sstart, bool Dbreak, char* cname, char* co, int nw, int pow, char* tv);
	static int getnumberofbikes();
	void setheight(double h);
	virtual void checkType();
	Bike(Bike &obj);
	Bike operator =(Bike& obj);
	
	double getheight()const;
	
	void setselfstart(bool selfStart);
	
	bool getselfstart();
	
	void setdiscbreak(bool Dbreak);
	
	bool getdiscbreak();
	~Bike();
	
};
ostream& operator<<(ostream& out, Bike& obj);

istream& operator>>(istream& in, Bike& obj);
ofstream& operator<<(ofstream& fout, Bike& obj);
ifstream& operator>>(ifstream& fin, Bike& obj);








