#include<iostream>
using namespace std;
class employee
{
private:
	 const int  empid=0;
	char* name;
	int salary;
	int yearOfJoining;
	int workingyear;
	char* address;
public:
	employee() 
	{
		salary = 0;
		yearOfJoining = 0;
		
	}

    
	employee(int em,char* na,int sal,int yearofj, char* addres ):empid(em)
	{
		int len = strlen(na);
		name = new char[len+1];
		len++;
		strcpy_s(name, len, na);
		salary = sal;
		yearOfJoining = yearofj;

		int len1 = strlen(addres);
		address = new char[len1 + 1];
		len++;
		strcpy_s(address, len1, addres);

	}
	void setname(char* na)
	{
		int len = strlen(na);
		name = new char[len + 1];
		len++;
		strcpy_s(name, len, na);


	}
	void setsalary(int sal)
	{
		salary = sal;
	}
	void setyearOfJoining(int y)
	{
		yearOfJoining = y;
	}
	char* getname()
	{
		char* temp;
		int len = strlen(name);
		temp = new char[len + 1];
		len++;
		strcpy_s(temp, len, name);
		return temp;

	}
	void setaddress(char*ad)
	{
		int len = strlen(ad + 1);
		len++;
		address = new char(len);
		strcpy_s(address, len, ad);
	}
	int getsalary()
	{
		return salary;
	}
	int setyearOfJoining()
	{
		return yearOfJoining;
	}
	void calculateWorkingYear()
	{
		workingyear = 2020 - yearOfJoining;
		cout << "employee expriance = " << workingyear << "\n";
	}
	void dispaly()
	{
		cout << name << "has been working since " << yearOfJoining  << "with a salary of " << salary << "PKR" << "address of " << name << address;
	}
	~employee()
	{
		delete[] name;
		delete[] address;
	}
};
int main()
{
	char* name,*addreess;
	name = new char[20];
	addreess=new char[70];
	char name1[20], addreess1[70];
	int sal = 0, yearofjoining = 0;
	int sal1 = 0, yearofjoining1 = 0;
	 int	em1,em;
	cout << " please enter the  year of empolyee id\n";
	cin >> em;
	cout << "enter the  name please\n";
	cin.getline(name, 20);
	cout << " please enter the  salary \n";
	cin >> sal;

	cout << " please enter the  year of joining\n";
	cin >> yearofjoining;
	cout << " please enter the  empolyee address\n";
	cin >> addreess;
	employee s1(em,name,sal,yearofjoining,addreess);

	cout << " please enter the  year of empolyee id\n";
	cin >> em1;
	cout << "enter the  name please\n";
	cin.getline(name1, 20);
	cout << " please enter the  salary \n";
	cin >> sal1;

	cout << " please enter the  year of joining\n";
	cin >> yearofjoining1;
	cout << " please enter the  empolyee address\n";
	cin >> addreess1;
	employee s2(em1, name1, sal1, yearofjoining1, addreess1);
	cout << "empolyee 1 information\n\n";
	s1.dispaly();
	s1.calculateWorkingYear();
	cout << "empolyee 2 information\n\n";
	s2.dispaly();
	s2.calculateWorkingYear();
}