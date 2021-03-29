#include"Vehicle.h"

class Truck :public Vehicle
{
	double containerSize;
	char* category;
	bool fourWheelDrive;
	static int numberOfTrucks;
public:
	Truck();

	Truck(double contSize, char* categ, bool fourWheeldrive, char* cname, char* co, int nw, int pow, char* tv);
	
	Truck(Truck& obj);
	
	Truck& operator=(Truck& obj);
	
	static int getnumberOfTrucks();
	
	void setcontainerSize(double contSize);
	
	double getcontainerSize();

		virtual void checkType();
	
	
	void setcategory(char* categ);
	
	char* getcategory();
	
	void setfourWheelDrive(bool fourwheeldrive);
	
	bool getfourWheelDrive();
	
	~Truck();
	


};
ostream& operator<<(ostream& out, Truck& obj);

istream& operator>>(istream& in, Truck& obj);



ifstream& operator>>(ifstream& fin, Truck& obj);

ofstream& operator<<(ofstream& fout, Truck& obj);




