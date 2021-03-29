#include "Car.h"

	Car::Car()
	{
		numberofdoors = 0;
		trasmission = nullptr;
		noOfSeats = 0;
		numbersofcars++;
	}
	Car::Car(char* cname, char* co, int nw, int pow, char* tv, int noOfdoors, char* trans, int numofseat) :Vehicle(cname, co, nw, pow, tv)
	{
		numberofdoors = noOfdoors;
		int size = strlen(trans);
		trasmission = new char[size];
		strcpy_s(trasmission, size, trans);
		noOfSeats = numofseat;
		numbersofcars++;
	}
	Car::Car(Car& obj)
	{
		this->numberofdoors = obj.numberofdoors;
		int size = strlen(obj.trasmission);
		trasmission = new char[size];
		strcpy_s(trasmission, size, obj.trasmission);
		noOfSeats = obj.noOfSeats;
	}
	Car Car::operator=(Car& obj)
	{
	   this->numberofdoors = obj.numberofdoors;
		int size = strlen(obj.trasmission);
		trasmission = new char[size];
		strcpy_s(trasmission, size, obj.trasmission);
		noOfSeats = obj.noOfSeats;
		return *this;
	}
	 int Car::getnumbersofcars()
	{
		return numbersofcars;
	}
	void Car::setnumberofdoors(int ndoors)
	{
		numberofdoors = ndoors;
	}
	int Car::getnumberofdoors()
	{
		return numberofdoors;
	}
	 void Car::checkType()
	{
		//here we take powercc to get the differance between car and truck
		// i assume that the power of car must be less than two thousands 
		if ((getnumberOfWheels() == 4) && (getpowerCC() < 2000))
		{
			cout << "car\n";
		}
	}
	void Car::settrasmission(char* trans)
	{
		if (trasmission != nullptr)
		{
			delete[] trasmission;
		}
		int size = strlen(trans);
		size += 1;
		trasmission = new char[size];
		strcpy_s(trasmission, size, trans);
	}
	char* Car::gettrasmission() const
	{
		char* trans;
		int size = strlen(trasmission);
		size += 1;
		trans = new char[size];
		strcpy_s(trans, size, trasmission);
		return trans;
	}
	void Car::setnoOfSeats(int seats)
	{
		noOfSeats = seats;
	}
	int  Car::getnoOfSeats()
	{
		return noOfSeats;
	}
	Car::~Car()
	{
		delete[]trasmission;
		trasmission = nullptr;
		numbersofcars--;
	}



ostream& operator<<(ostream& out, Car& obj)
{
	int numofdoors = obj.getnumberofdoors();
	char* ltrans = obj.gettrasmission();
	int numofseats = obj.getnoOfSeats();

	out << "Number of doors = " << numofdoors << "\n";
	out << "transmission = " << ltrans << "\n";
	out << "number of seats = " << numofseats << "\n";
	
	return out;
}
istream& operator>>(istream& in, Car& obj)
{
	int numofdoors;
	char ltrans[100] = {};
	int numofseats;
	char a = '\0';
	cout << "enter number of doors\n";
	in >> numofdoors;
	obj.setnumberofdoors(numofdoors);
	cout << "enter number of seats\n";
	in >> numofseats;
	obj.setnoOfSeats(numofseats);

	cout << "enter the transmission\n";
	int i = 0;
	in.ignore();
	while (a != '\n')
	{
		in.get(a);
		ltrans[i] = a;
		ltrans[i + 1] = '\0';
		i++;

	}
	obj.settrasmission(ltrans);

	return in;
}

ifstream& operator>>(ifstream& fin, Car& obj)
{
	int numofdoors;
	char ltrans[100] = {};
	int numofseats;
	char a = '\0';
	
	fin >> numofdoors;
	obj.setnumberofdoors(numofdoors);
	
	fin >> numofseats;


	
	int i = 0;
	
	while (a != '\n')
	{
		fin.get(a);
		ltrans[i] = a;
		ltrans[i + 1] = '\0';
		i++;

	}
	obj.settrasmission(ltrans);

	return fin;
}
ofstream& operator<<(ofstream& fout, Car& obj)
{
	int numofdoors = obj.getnumberofdoors();
	char* ltrans = obj.gettrasmission();
	int numofseats= obj.getnoOfSeats();
	fout << numofdoors;
	fout << ltrans;
	fout << numofseats;
	return fout;
	
}


int Car::numbersofcars = 0;