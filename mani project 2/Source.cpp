#include"Vehicle.h"
#include"Bike.h"
#include"Truck.h"
#include"Car.h"
#include"fstream"
Vehicle** regrow(Vehicle** array, int& size, Vehicle* arr);

void VehicleCopy(Vehicle** destination, int& size, Vehicle** source);
class BilalMotors
{
	Vehicle** VehicleArr;
	int size;
public:
	BilalMotors()
	{
		VehicleArr = nullptr;
		size = 1;
		
	}
	BilalMotors(Vehicle** arr, int siz)
	{
		VehicleArr = new Vehicle*[siz];
		VehicleCopy(VehicleArr, siz, arr);  
	}
	BilalMotors(BilalMotors& obj)
	{
		VehicleCopy(VehicleArr, obj.size, obj.VehicleArr);
		size = obj.size;
	}
	BilalMotors operator =(BilalMotors obj)
	{

		VehicleCopy(VehicleArr, obj.size, obj.VehicleArr);
		size = obj.size;
	}
	void addVehicle(Vehicle* arr)
	{
		VehicleArr = regrow(VehicleArr, size, arr);
	 
	}
	void searchVehicle(char* type)
	{
		for (int i = 0; i < size; i++)
		{
			if (strcmp(VehicleArr[i]->getTypeOfVehicle(), type) == 0)
			{
				cout << VehicleArr[i];
			}
		}

	}
	~BilalMotors()
	{
		delete[] VehicleArr;
		VehicleArr= nullptr;
	}
	Vehicle* operator[](int index)
	{
		return VehicleArr[index];
	}
	bool saveData(const char* fileName) const
	{
		
		ofstream write;
		write.open(fileName + '.txt');
		for (int i = 0; i < size; i++)
		{
			write << VehicleArr[i];

		}
		
	}
	void display() const
	{
		for (int i = 0; i < size; i++)
		{
			cout << VehicleArr[i];
		}
	}

};
Vehicle** regrow(Vehicle**array,int&size,Vehicle*arr)
{ 
	if (array == nullptr)
	{
		if (strcmp(arr->getTypeOfVehicle(), "Bike") == 0)
		{
			array[0] = new Bike[1];
			array[0] = arr;
		}
		else if (strcmp(arr->getTypeOfVehicle(), "Car") == 0)
		{
			array[0] = new Car[1];
			array[0] = arr;
		}
		else if (strcmp(arr->getTypeOfVehicle(), "Truck") == 0)
		{
			array[0] = new Truck[1];
			array[0] = arr;
		}

		size++;
		return array;
	}
	Vehicle** functionArray = new Vehicle * [size + 1];
	for (int i = 0; i < size; i++)
	{
		functionArray[i] = array[i];
	}
	if (strcmp(arr->getTypeOfVehicle(),"Bike")==0)
	{
		functionArray[size + 1] = new Bike [1];
		functionArray[size + 1] = arr;
	}
	else if (strcmp(arr->getTypeOfVehicle(), "Car") == 0)
	{
		functionArray[size + 1] = new Car[1];
		functionArray[size + 1] = arr;
	}
	else if (strcmp(arr->getTypeOfVehicle(), "Truck") == 0)
	{
		functionArray[size + 1] = new Truck[1];
		functionArray[size + 1] = arr;
	}
	
	size++;
	delete[] array;
	array = functionArray;
	return array;
}
void VehicleCopy(Vehicle** destination, int &size, Vehicle** source)
{
	//this function work same as strcpy_s
	for (int i = 0; i < size; i++)
	{
		
		destination[i] = source[i];
		
	}
	
}
void ShowVehicles(const BilalMotors& obj)
{
	obj.display();
}

int main()
{
	char companyname[100] = {};
	char colour[100] = {};
	char typeofv[100] = {};
	int powcc = 0;
	int numofwheel = 0;
	// bike data members
	double height = 0;
	bool selfstart;
	bool discbreak;
	// Car
	int numberofdoors = 0;
	char trasmission[50] = {};
	int noOfSeats = 0;
//truck
	double containerSize=0;
	char category[50] = {};
	bool fourWheelDrive=0;
	
	char s1;
	char s2;
	while (true)
	{
		
		cout << " \n*** BILAL MOTORS ***\n";
		cout << "  S\t Show vehicles list (brief) \n";
		cout << "  E\t Create a data file (output file) \n";
		cout << "  A\t Add new vehicle \n";
		cout << "  F\t Find Vehicle by type\n";
		cout << "  Q\t Quit Program \n";
		cin >> s1;
		BilalMotors obj;
		switch (s1)
		{
		case 'S':
			ShowVehicles(obj);

			break;
		case'E':
			char filename[50] = {};
			cout << "enter the file name\n";
			cin >> filename;
			obj.saveData(filename);
			break;
		case'A':
			
			cout << "   B\t for Bike \n";
			cout << "   C\t for Car\n";
			cout << "   T\t for Truck \n";
			cin >> s2;
			switch (s2)
			{

			case 'B':

				
				cout << "please enter company name\n";
				cin >> companyname;
				cout << "please enter the colour\n";
				cin >> colour;
				cout << "please enter type of Vehicle\n";
				cin >> typeofv;
				cout << "please enter powercc\n";
				cin >> powcc;
				cout << "please enter number of wheel\n";
				cin >> numofwheel;
				cout << "enter the  Height\n";
				cin >> height;
				cout << "enter the  selfstart in 0 or 1\n";
				cin >> selfstart;
				cout << "enter the  disc break in 0 or 1\n";
				cin >> discbreak;
			
				Bike b(height, selfstart, discbreak, companyname, numofwheel, powcc, trasmission);
				Vehicle* v = &b;
				obj.addVehicle(v);
				break;
			case'C':

				cout << "please enter company name\n";
				cin >> companyname;
				cout << "please enter the colour\n";
				cin >> colour;
				cout << "please enter type of Vehicle\n";
				cin >> typeofv;
				cout << "please enter powercc\n";
				cin >> powcc;
				cout << "please enter number of wheel\n";
				cin >> numofwheel;
				cout << "enter number of doors\n";
				cin >> numberofdoors;

				cout << "enter number of seats\n";
				cin >> noOfSeats;


				cout << "enter the transmission\n";
				cin >> trasmission;
				Car c(companyname, colour, numofwheel, powcc, numberofdoors, trasmission, noOfSeats);
				Vehicle* w = &c;
				obj.addVehicle(w);
				break;
			case'T':

				cout << "please enter company name\n";
				cin >> companyname;
				cout << "please enter the colour\n";
				cin >> colour;
				cout << "please enter type of Vehicle\n";
				cin >> typeofv;
				cout << "please enter powercc\n";
				cin >> powcc;
				cout << "please enter number of wheel\n";
				cin >> numofwheel;
				cout << "please enter continer size\n";
				cin >> containerSize;
				cout << "please enter category\n";
				cin >> category;
				cout << "please enter four wheel drive\n";
				cin >> fourWheelDrive;

				Truck t(containerSize, category, fourWheelDrive, companyname, colour, numofwheel, trasmission);
				Vehicle* r = &t;
				obj.addVehicle(r);
				break;
			default:
				cout << "please enter the right option\n";
				break;
			
			}
			break;
		case 'F':
			char type[50];
			cout << "please enter type\n";
			cin >>type;
			obj.searchVehicle(type);
			break;
		case 'Q':
			if (true)
			{
				break;
			}
			break;
	default:
			cout << "please enter the right option\n";
			break;
		}
	}


}