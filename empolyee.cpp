#include<iostream>
#include"Date.h"
using namespace std;

class Employee
{
    int emp_id = 0;
	double  salaray;
	Date d;

public:

	Employee()
	{
		salaray = 0;
		emp_id= 0;
	}

	Employee(int empid, double salry,int month,int dat,int year) 
	{
		emp_id = empid;
		salaray = salry;
		d.setday(dat);
		d.setmoth(month);
		d.setyear(year);

	}
	Employee(Employee& obj)
	{
		emp_id = obj.emp_id;
		salaray = obj.salaray;
		d.copyDate(obj.d)
	}

	void setsalary(int salry)
	{
			this->salaray = salry;
			
		
	}
	void setEmp_id(int emp_id)
	{
		this->emp_id = emp_id;
	}
	int getEmp_id()
	{ 
			return this->emp_id;
	}
	void setDate(int  d,int m,int y) {
		this->d.setday(d);
		this->d.setmoth(m);
		this->d.setyear(y);
	}





	int getsalaray() const
	{
		return salaray;
	}
	

	void display()
	{
		cout << "emp_id= " << emp_id<<"\n";
		cout << "salaary" << salaray;
		d.showDate();
	}

	~Employee()
	{
		
	}
};


