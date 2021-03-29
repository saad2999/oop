#include<iostream>
using namespace std;
class person
{
private:
	char* name;
	int age;

	
public:
	static int count;
	person(char*na=nullptr,int age=0)
	{
		if (na != nullptr)
		{
			int size = strlen(na);
			name = new char[size + 1];
			size = size + 1;
			strcpy_s(name, size, na);
		}
		this->age = age;

	}
	int static getcount()
	{
		return count;
	}
	void setname(char* temp)
	{
		if (temp != nullptr)
		{
			int size = strlen(temp);
			name = new char[size + 1];
			size = size + 1;

			strcpy_s(name, size, temp);
		}

	}
	void getname()
	{
		char* temp;
		if (name != nullptr)
		{
			int size = strlen(name);
			temp = new char[size + 1];
			size = size + 1;

			strcpy_s(temp, size, name);
		}

	}
	void setage(int a)
	{
		age = a;

	}
	int getage()
	{
		return age;
	}
	void dispaly()
	{
		cout << "name = " << name<<"\n";
		cout << "age = " << age<<"\n";

	}
	~person()
	{
		delete[]name;
	}

};
class empolyee :public person
{
private:
	double salary;
	int empolyeeid;
public:
	empolyee(double sal = 0.00, int emp = 0)
	{
		salary = sal;
		empolyeeid = emp;
		count++;
	}
	void setsalary(double sal)
	{
		salary = sal;
	}
	void setempolyeeid(int emp)
	{
		empolyeeid = emp;
    }
	double getsalary()
	{
		return salary;
	}
	int getempolyeeid()
	{
		return empolyeeid;
	}
	void dispaly()
	{
		cout << "salary = " << salary << "\n";
		cout << "empolyeeid = " << empolyeeid << "\n";

	}
};
class baseball:public person
{
private:
	double battingavg;
	int totalruns;
public:
	baseball(double avg = 0.00, int runs = 0)
	{
		battingavg = avg;
		totalruns = runs;
		count++;
	}
	void setbattingavg(double avg)
	{
		battingavg = avg;
	}
	void settotalruns(int runs)
	{
		totalruns = runs;
	}
	double getbattingavg()
	{
		return battingavg;
	}
	int gettotalruns()
	{
		return totalruns;
	}
	void dispaly()
	{
		cout << "battingavg = " << battingavg << "\n";
		cout << "totalruns = " << totalruns << "\n";

	}
};
static int count = 0;
int main()
{
	char arr[50] = {'s','a','a','d'};
	person s(arr, 18);
	s.dispaly();
	empolyee e(2000, 123);
	e.dispaly();
	baseball b(50.00,2000);
	b.dispaly();
	//cout << "total number of baseballpalyer and empolyee =" << person::count;


}