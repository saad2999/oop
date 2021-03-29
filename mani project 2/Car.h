#pragma once
#include"Vehicle.h"
class Car :public Vehicle
{
	int numberofdoors;
	char* trasmission;
	int noOfSeats;
	static int numbersofcars;
public:
	Car();
		Car(char* cname, char* co, int nw, int pow, char* tv, int noOfdoors, char* trans, int numofseat);
		Car(Car& obj);
		Car operator=(Car& obj);
	
		static int getnumbersofcars();
	
		void setnumberofdoors(int ndoors);
	
		int getnumberofdoors();
	
		virtual void checkType();
	
		void settrasmission(char* trans);
		char* gettrasmission() const;
	
		void setnoOfSeats(int seats);
	
		int getnoOfSeats();
	
		~Car();
	


};
ostream& operator<<(ostream& out, Car& obj);

istream& operator>>(istream& in, Car& obj);
ifstream& operator>>(ifstream& in, Car& obj);
//inserting fout remaining



