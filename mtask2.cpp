#include<iostream> //year setter and getter
using namespace std;
class Date {
private:
	int date;
	int month;
	int year;
public:
	 Date()
	 {
		date = 1;
		month = 1;
		year = 1999;

	 }
	Date(int d , int mon , int y )
    {
		if ((d < 0) || (d > 30))
		{
			date = 1;
		}
		else
		{
			date = d;
		}

		if ((mon < 0) || (mon > 12))
		{
			month = 1;
		}
		else
		{
			month = mon;
		}

		if ((y < 100) || (y > 99999))
		{
			year = 1990;
		}
		else
		{
			year = y;
		}


	}
	void setyear(int y)
	{
		if ((y < 100) || (y > 99999))
		{
			year = 1990;
		}
		else
		{
			year = y;
		}


	}
	int getyear()
	{
		return year;
	}
	void setdate(int d = 1)
	{
		if ((d < 0) || (d > 30))
		{
			date = 1;
		}
		else
		{
			date = d;
		}

	}
	int getdate()
	{
		return date;

	}
	void setmoth(int mon)
	{
		if ((mon < 0) || (mon > 12))
		{
			month = 1;
		}
		else
		{
			month = mon;
		}
	}
	int getmonth()
	{

		return month;
	}
	void dispaly()
	{
		cout << "date = " << date << "\n";
		cout << "month = " << month << "\n";
		cout << "year = " << year << "\n";
	}

};
void comparedate( Date& const  s1, Date& const  s2)
{
	if((s1.getdate() == s2.getdate())&&(s1.getmonth()==s2.getmonth())&&((s1.getyear()==s2.getyear())))
	{
		cout << "equal\n";
	}
	else
	{
		cout << "not equal\n";
	}
}
int main()
{
	int date = 0,m=0,y=0;
	

	cout << "enter a date\n";
	cin >> date;
	cout << "enter a number of month\n";
	cin >> m;
	cout << "enter a year\n";
	cin >>y ;


	Date s1(2, 8, 1990); 
	
	Date s2(2, 5, 1990);
	comparedate(s1, s2);
}