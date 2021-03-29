
#include "Truck.h"


	Truck::Truck()
	{
		containerSize = 0;
		category = nullptr;
		fourWheelDrive = 0;
	}
	Truck::Truck(double contSize, char* categ, bool fourWheeldrive, char* cname, char* co, int nw, int pow, char* tv) :Vehicle(cname, co, nw, pow, tv)
	{
		containerSize = contSize;
		int size = strlen(categ);
		size += 1;
		category = new char[size];
		strcpy_s(category, size, categ);
		fourWheelDrive = fourWheeldrive;

	}
	Truck::Truck(Truck& obj)
	{
		containerSize = obj.containerSize;

		int size = strlen(obj.category);
		size += 1;
		category = new char[size];
		strcpy_s(category, size, obj.category);

		fourWheelDrive = obj.fourWheelDrive;

	}
	Truck& Truck::operator=(Truck& obj)
	{
		this->containerSize = obj.containerSize;
		int size = strlen(obj.category);
		size += 1;
		category = new char[size];
		strcpy_s(category, size, obj.category);

		this->fourWheelDrive = obj.fourWheelDrive;
		return *this;
	}
	 int Truck::getnumberOfTrucks()
	{
		return numberOfTrucks;
	}
	void  Truck::setcontainerSize(double contSize)
	{
		containerSize = contSize;
	}
	double  Truck::getcontainerSize()
	{
		return containerSize;
	}

	void Truck::checkType()
	{
		//here we take powercc to get the differance between car and truck
		// i assume that the power of car must be greater than two thousands 
		if ((getnumberOfWheels() == 4) && (getpowerCC() > 2000))
		{
			cout << "Truck\n";
		}
	}
	void Truck::setcategory(char* categ)
	{
		int size = strlen(categ);
		size += 1;
		category = new char[size];
		strcpy_s(category, size, categ);
	}
	char* Truck::getcategory()
	{
		char* categ = nullptr;
		int size = strlen(category);
		size += 1;
		categ = new char[size];
		strcpy_s(categ, size, category);
		return categ;
	}
	void Truck::setfourWheelDrive(bool fourwheeldrive)
	{
		fourWheelDrive = fourwheeldrive;
	}
	bool Truck::getfourWheelDrive()
	{
		return fourWheelDrive;
	}
	Truck::~Truck()
	{
		delete[] category;
		category = nullptr;
		numberOfTrucks--;
	}



ostream& operator<<(ostream& out, Truck& obj)
{
	double contSize = obj.getcontainerSize();
	char* categ = obj.getcategory();
	bool fourwheeldrive = obj.getfourWheelDrive();
	out << "size of container =" << contSize << "\n";
	out << "category = " << categ << "\n";
	out << "four wheel drive = " << fourwheeldrive << "\n";
	out << "numbers of  truck" << Truck::getnumberOfTrucks;
	return out;
}
istream& operator>>(istream& in, Truck& obj)
{
	double contSize;
	char categ[100] = {};
	bool fourwheeldrive;

	char a = '\0';
	cout << "enter size of container\n";
	in >> contSize;
	obj.setcontainerSize(contSize);
	cout << "enter four wheel drive \n";
	in >> fourwheeldrive;
	obj.setfourWheelDrive(fourwheeldrive);

	cout << "enter the category\n";
	int i = 0;
	in.ignore();
	while (a != '\n')
	{
		in.get(a);
		categ[i] = a;
		categ[i + 1] = '\0';
		i++;

	}
	obj.setcategory(categ);

	return in;
}

ifstream& operator>>(ifstream& fin, Truck& obj)
{
	double contSize;
	char categ[100] = {};
	bool fourwheeldrive;

	char a = '\0';
	fin >> contSize;
	obj.setcontainerSize(contSize);
	fin >> fourwheeldrive;
	obj.setfourWheelDrive(fourwheeldrive);


	int i = 0;
	fin.ignore();
	while (a != '\n')
	{
		fin.get(a);
		categ[i] = a;
		categ[i + 1] = '\0';
		i++;

	}
	obj.setcategory(categ);

	return fin;
}
ofstream& operator<<(ofstream& fout, Truck& obj)
{
	double contSize = obj.getcontainerSize();
	char* categ = obj.getcategory();
	bool fourwheeldrive = obj.getfourWheelDrive();
	fout << contSize;
	fout << categ;
	fout << fourwheeldrive;

	return fout;
}
int Truck::numberOfTrucks = 0;



