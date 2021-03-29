#include "Bike.h"

	Bike::Bike()
	{
		height = 0.0;
		selfstart = 0;
		discbreak = 0;
		numberofbikes++;
	}
	Bike::Bike(double localHeight, bool Sstart, bool Dbreak, char* cname, char* co, int nw, int pow, char* tv)
		:Vehicle(cname, co, nw, pow, tv)
	{
		height = localHeight;
		selfstart = Sstart;
		discbreak = Dbreak;
		numberofbikes++;
	}
	int Bike::getnumberofbikes()
	{
		return numberofbikes;
	}
	void Bike::setheight(double h)
	{
		height = h;
	}
	 void Bike::checkType()
	{
		int w = getnumberOfWheels();
		if (w == 2)
		{
			cout << "type of vehicle is bike\n";
		}
	}
	 Bike::Bike(Bike& obj)
	 {
		 this->height = obj.height;
		 this->selfstart = obj.selfstart;
		 this->discbreak = obj.discbreak;

	 }
	 Bike Bike::operator=(Bike& obj)
	 {
		 this->height = obj.height;
		 this->selfstart = obj.selfstart;
		 this->discbreak = obj.discbreak;
		 return *this;

	 }
	double Bike::getheight()const
	{
		return height;
	}
	void Bike::setselfstart(bool selfStart)
	{
		this->selfstart = selfStart;
	}
	bool Bike::getselfstart()
	{
		return selfstart;
	}
	void Bike::setdiscbreak(bool Dbreak)
	{
		this->discbreak = Dbreak;
	}
	bool Bike::getdiscbreak()
	{
		return discbreak;
	}

	Bike::~Bike()
	{
		numberofbikes--;
	}


ostream& operator<<(ostream& out, Bike& obj)
{
	double fheight = obj.getheight();
	bool fselfstart = obj.getselfstart();
	bool Dbreak = obj.getdiscbreak();
	out << "Height = " << fheight << "\n";
	out << "Self Start = " << fselfstart << "\n";
	out << "Disc Break = " << Dbreak << "\n";
	
	return out;
}
istream& operator>>(istream& in, Bike& obj)
{
	double fheight;
	bool fselfstart;
	bool Dbreak;

	cout << "enter the  Height\n";
	in >> fheight;
	cout << "enter the  selfstart in 0 or 1\n";
	in >> fselfstart;
	cout << "enter the  disc break in 0 or 1\n";
	in >> Dbreak;
	obj.setheight(fheight);
	obj.setselfstart(fselfstart);
	obj.setdiscbreak(Dbreak);
	


	return in;
}
ifstream& operator>>(ifstream& fin, Bike& obj)
{
	double fheight;
	bool fselfstart;
	bool Dbreak;

	
	fin >> fheight;
	
	fin >> fselfstart;

	fin >> Dbreak;
	obj.setheight(fheight);
	obj.setselfstart(fselfstart);
	obj.setdiscbreak(Dbreak);



	return fin;
}
ofstream& operator<<(ofstream& fout, Bike& obj)
{
	double fheight = obj.getheight();
	bool fselfstart = obj.getselfstart();
	bool Dbreak = obj.getdiscbreak();
	fout<< fheight ;
	fout << fselfstart << "\n";
	fout << Dbreak << "\n";
		return fout;
}



  int Bike::numberofbikes = 0;


