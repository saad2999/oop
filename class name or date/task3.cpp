#include"Name.h"
#include"Date.h"
#include<iostream>
class person
{
private:
	int cnic; 
	char address[50];
	Name name;
	Date dob;




public:
	
	person(int cnic, Name n={nullptr,nullptr}, Date dob = {}, char* a = nullptr) :name(n)
	{
		this->cnic = cnic;
		this->dob = dob;
		if (a!=nullptr)
		{
			for (int i = 0; a[i] != '\0'; i++)
			{
				this->address[i] = a[i];
			}
		}
	}
	Date& getdob()
	{
		return dob;
	}
	bool isElder(person& person2)
	{
		if (dob.getyear() > person2.dob.getyear())
		{
			return true;
		}
		else if (dob.getyear() == person2.dob.getyear())
		{
			if (dob.getmonth() > person2.dob.getmonth())
			{
				return true;
			}
			else if (dob.getmonth() == person2.dob.getmonth())
			{
				if (dob.getday() > person2.dob.getday())
				{
					return true;
				}
				else
				{
					return false;

				}
			}
			else
			{
				return false;
			}

		}
		else
		{
			return false;
		}
	}

	void display()
	{
		cout << " displaying information of";
		name.display();
			cout<<"\n";
		cout << "cnic = " << cnic<<"\n";
		cout << "address = " << address<<"\n";
		cout << "date of Birth = ";
		dob.showDate();
		cout << "\n";
    }
};
int main()
{
	int cnic;
	char ad[50];
	int mm, dd, yy;
	char fname[20];
	char lname[20];
	cout << "enter first name please\n";
	cin.getline(fname, 20);
	cin.ignore();
	cout << "enter last name please\n";
	cin.getline(fname, 20);
	cout << "enter DOB please MM:DD:YYYY\n";
	cin >> mm >> dd >> yy;
	cout << "enter cnic please\n";
	cin >> cnic;
	cin.ignore();
	cout << "enter address please\n";
	cin.getline(ad, 50);
	person s(cnic, { fname,lname }, { mm,dd,yy }, ad);
	s.display();
}  
