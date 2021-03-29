#include "Vehicle.h"
Vehicle::Vehicle()
{
	companyName = nullptr;
	color = nullptr;
	numberOfWheels = 0;
	powerCC = 0;
	typeOfVehicle = nullptr;

}
Vehicle::Vehicle(Vehicle &obj)
{
	
	int size1 = strlen(companyName);
	size1 += 1;
	obj.companyName = new char[size1];
	strcpy_s(obj.companyName, size1, companyName);

	

	
	int size2 = strlen(color);
	size2 += 1;
	obj.color = new char[size2];
	strcpy_s(obj.color, size2, color);
	

	
	int size3 = strlen(typeOfVehicle);
	size3 += 1;
	obj.typeOfVehicle = new char[size3];
	strcpy_s(obj.typeOfVehicle, size3, typeOfVehicle);
	
	this->numberOfWheels = obj.numberOfWheels;
	this->powerCC = obj.powerCC;





}
Vehicle& Vehicle::operator=(Vehicle& obj)
{
	int size1 = strlen(companyName);
	size1 += 1;
	obj.companyName = new char[size1];
	strcpy_s(obj.companyName, size1, companyName);

	int size2 = strlen(color);
	size2 += 1;
	obj.color = new char[size2];
	strcpy_s(obj.color, size2, color);



	int size3 = strlen(typeOfVehicle);
	size3 += 1;
	obj.typeOfVehicle = new char[size3];
	strcpy_s(obj.typeOfVehicle, size3, typeOfVehicle);

	this->numberOfWheels = obj.numberOfWheels;
	this->powerCC = obj.powerCC;
	return *this;

}
Vehicle::Vehicle(char* cname, char* co, int nw, int pow, char* tv)
{
	int size = strlen(cname);
	size += 1;
	companyName = new char[size];
	strcpy_s(companyName, size, cname);

	int size1 = strlen(co);
	size1 += 1;
	color = new char[size1];
	strcpy_s(color, size1, co);
	numberOfWheels = nw;
	powerCC = pow;

	int size2 = strlen(tv);
	size2 += 1;
	typeOfVehicle = new char[size2];
	strcpy_s(typeOfVehicle, size2, tv);

}
void Vehicle::setcompanyName(char* cname)
{
	if (companyName != nullptr)
	{
		delete[] companyName;
	}
	int size = strlen(cname);
	size += 1;
	companyName = new char[size];
	strcpy_s(companyName, size, cname);
}
char* Vehicle::getcompanyName() const
{
	char* cname;
	int size = strlen(companyName);
	size += 1;
	cname = new char[size];
	strcpy_s(cname, size, companyName);
	return cname;
}
void Vehicle::setcolour(char* fcolor)
{
	if (color != nullptr)
	{
		delete[] color;
	}
	int size = strlen(fcolor);
	size += 1;
	color = new char[size];
	strcpy_s(color, size, fcolor);
}
char* Vehicle::getcolour() const
{
	char* fcolor;
	int size = strlen(color);
	size += 1;
	fcolor = new char[size];
	strcpy_s(fcolor, size, color);
	return fcolor;
}

void Vehicle::setnumberOfWheels(int numberw)
{
	numberOfWheels = numberw;
}
int Vehicle::getnumberOfWheels() const
{
	return numberOfWheels;
}
void Vehicle::setpowerCC(int powerc)
{
	powerCC = powerc;
}
int Vehicle::getpowerCC()const
{
	return powerCC;
}
void Vehicle::setTypeOfVehicle(char* Tvechicle)
{
	if (typeOfVehicle != nullptr)
	{
		delete[] typeOfVehicle;
	}
	int size = strlen(Tvechicle);
	size += 1;
	typeOfVehicle = new char[size];
	strcpy_s(typeOfVehicle, size, Tvechicle);
}
char* Vehicle::getTypeOfVehicle() const
{
	char* Tvechicle;
	int size = strlen(typeOfVehicle);
	size += 1;
	Tvechicle = new char[size];
	strcpy_s(Tvechicle, size, typeOfVehicle);
	return Tvechicle;
}


 void Vehicle::dispaly() const
{
	cout << "company Name = " << companyName << "\n";
	cout << "colour =" << color << "\n";
	cout << "number of wheels = " << numberOfWheels << "\n";
	cout << "power in CC = " << powerCC << "\n";
	cout << "type of vehicle  = " << typeOfVehicle << "\n";


}


Vehicle::~Vehicle()
{
	delete[] companyName;
	companyName = nullptr;
	delete[] color;
	color = nullptr;
	delete[] typeOfVehicle;
	typeOfVehicle = nullptr;
}

ostream& operator<<(ostream out, Vehicle& obj)
{
	char* companyN = obj.getcompanyName();
	char* colour = obj.getcolour();
	char* typeofvichcle = obj.getTypeOfVehicle();
	int numofwheel = obj.getnumberOfWheels();
	int powercc = obj.getpowerCC();

	out << "company Name = " << companyN << "\n";
	out << "colour =" << colour << "\n";
	out << "number of wheels = " << numofwheel << "\n";
	out << "power in CC = " << powercc << "\n";
	out << "type of vehicle  = " << typeofvichcle << "\n";

	return out;
}
istream& operator>>(istream& in, Vehicle& obj)
{
	char companyN[100] = {};
	char colour[100] = {};
	char typeofvichcle[100] = {};
	int numofwheel = 0;
	int powercc = 0;
	char a = '\0';
	int i = 0;
	cout << "enter the company name please\n";
	while (a != '\n')
	{
		in.get(a);
		companyN[i] = a;
		i++;
	}
	char b='\0';
	int j=0;
	cout << "enter the colour please\n";
	while (b != '\n')
	{
		in.get(b);
		colour[j] = b;
		j++;
	}

	obj.setcompanyName(companyN);
	cin.ignore();
	char c='\0';
	int k=0;
	cout << "enter the type please\n";
	while (c != '\n')
	{
		in.get(c);
		typeofvichcle[k] = c;
		k++;
	}
	obj.setcolour(colour);
	obj.setTypeOfVehicle(typeofvichcle);

	cout << "enter the powercc\n";
	cin >> powercc;
	obj.setpowerCC(powercc);
	cout << "enter the number of wheels\n";
	cin >> numofwheel;
	obj.setnumberOfWheels(numofwheel);

	return in;
}
