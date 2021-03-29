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
	Date(int d, int mon, int y)
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
	void calculateAge(Date  o)
	{
		int m[12] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

		if (date>o.date)
		{
			o.date = o.date + m[month - 1];
			o.month = o.month - 1;

			
		}
		if (month > o.month)
		{
			o.year = o.year - 1;
			o.month = o.month + 12;
		}
		int agedate=o.date- date;
		int agemonth= o.month-month;
		int ageyear=o.year-year;
		cout << "\n\n";

		cout << "age day = " << agedate << "\n";
		cout << " age month = " << agemonth << "\n";
		cout << "age year = " << ageyear << "\n";
	}

};

int main()
{
	int date = 0, m = 0, y = 0;


	cout << "enter a current date\n";
	cin >> date;
	cout << "enter a number of current month\n";
	cin >> m;
	cout << "enter a current year\n";
	cin >> y;


	Date cdate(date, m, y);

	cout << "enter a birth date\n";
	cin >> date;
	cout << "enter a number of birth month\n";
	cin >> m;
	cout << "enter a birth year\n";
	cin >> y;


	Date birthDate(date, m, y);
	cout << "dispalying current date \n ";
	cdate.dispaly();
	cout << "dispalying birth date \n ";
	birthDate.dispaly();
	cout << "\n\n";
	birthDate.calculateAge(cdate);
}