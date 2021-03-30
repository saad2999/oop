#include<iostream> //haseeb ka kaam
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
		Date()
	{
		month = 12;
		day = 1;
		year = 2020;

	}
		Date(int mon, int d, int y)
		{
			if ((this->month == 2) || (this->month == 4) || (this->month == 6) || (this->month == 9) || (this->month == 11))
			{
				if ((d < 0) || (d > 31))
				{
					day = 1;
				}
				else
				{
					day = d;
				}
			}
			else
			{
				if ((d < 0) || (d > 32))
				{
					day = 1;
				}
				else
				{
					day = d;
				}
			}

			


		if ((mon < 0) || (mon > 12))
		{
			month = 12;
		}
		else
		{
			month = mon;
		}

		if ((y < 100) || (y > 99999))
		{
			year = 2020;
		}
		else
		{
			year = y;
		}
		
	}
	bool vaidtycheck()
	{
		int d = this->day;
		int mon = this->month;
		int y = this->year;
		bool day;
		bool month;
		bool year;
		if ((this->month == 2) || (this->month == 4) || (this->month == 6) || (this->month == 9) || (this->month == 11))
		{
			if ((d > 0) || (d < 31))
			{
				day = 1;

			}
			else
			{
				day = 0;

			}
		}
		else
		{
			if ((d > 0) || (d < 32))
			{
				day = 1;

			}
			else
			{
				day = 0;

			}
		}

		

		if ((mon < 0) || (mon > 12))
		{
			month = 1;
		}
		else
		{
			month = 0;
		}

		if ((y < 100) || (y > 99999))
		{
			year = 1;
		}
		else
		{
			year = 0;

		}
		bool check;
		if ((day) && (month) && (year))
		{
			check = true;
			return check;
		}
		else
		{
			check = false;
			return check;
		}

	}


	Date(const Date& obj)
	{ 
		
		

		
		
		this->month = obj.month;
		this->day = obj.day;
		this->year = obj.year;


	}

	void setyear(int y)
	{
		if ((y < 100) || (y > 99999))
		{
			year = 2020;
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
	void setday(int d = 1)
	{
		if ((month == 2) || (month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			if ((d > 0) || (d < 31))
			{
				day = 1;
			}
			else
			{
				day = d;
			}
		}
		else
		{
			if ((d > 0) || (d < 32))
			{
				day = 1;
			}
			else
			{
				day = d;
			}

		}

	}
	int getday()
	{
		return day;

	}
	void setmoth(int mon)
	{
		if ((mon < 0) || (mon > 12))
		{
			month = 12;
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
	bool copyDate(Date& obj)
	{
		if ((day == obj.day) && (month == obj.month) && (year == obj.year))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool inputcompletedate(int mon,int d,int y)
	{
		
		if ((mon == 2) || (mon == 4) || (mon == 6) || (mon == 9) || (mon == 11))
		{
			if ((d < 0) || (d > 31))
			{
				day = 1;
			}
			else
			{
				day = d;
			}
		}
		else
		{
			if ((d < 0) || (d > 32))
			{
				day = 1;
			}
			else
			{
				day = d;
			}
		}




		if ((mon < 0) || (mon > 12))
		{
			month = 12;
		}
		else
		{
			month = mon;
		}

		if ((y < 100) || (y > 99999))
		{
			year = 2020;
		}
		else
		{
			year = y;
		}
		if ((this->month == mon) && (this->day == d) && (this->year == y))
		{
			return true;

		}
		else
		{
			return false;
		}

	}

	
	void showDate()
	{
		cout << "day = " << day << "\n";
		cout << "month = " << month << "\n";
		cout << "year = " << year << "\n";
	}
	int daysBetween(Date& o)
	{
		int m[12] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

		if (day > o.day)
		{
			o.day = o.day + m[month - 1];
			o.month = o.month - 1;


		}
		
		int differance = o.day - day;
		return differance;
	}
	int operator -(Date& o)
	{
		int m[12] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

		if (day > o.day)
		{
			o.day = o.day + m[month - 1];
			o.month = o.month - 1;


		}

		int differance = o.day - day;
		return differance;
	}
	Date& getDate() const
	{
		Date temp;
		temp.month = month;
		temp.day = day;
		temp.year = year;
	}
	void retrieveDate(int& mon, int& d, int& yr) 
	{
		month = mon;
		day = d;
		year = yr;
		

	}
	bool isEqual(Date& obj)
	{
		if ((month == obj.month) && (day == obj.day) && (year == obj.year))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};


int main()
{
	int day = 0, m = 0, y = 0;
	int day2 = 0, m2 = 0, y2 = 0;

	cout << "enter a date\n";
	cin >> day;
	cout << "enter a number of month\n";
	cin >> m;
	cout << "enter a year\n";
	cin >> y;
	

	cout << "enter a date\n";
	cin >> day2;
	cout << "enter a number of month\n";
	cin >> m2;
	cout << "enter a year\n";
	cin >> y2;
	Date s1(m, day, y);
	Date s2(m2, day2, y2);
	cout<<s1.daysBetween(s2)<<"\n";
	cout << s1.isEqual(s2) << "\n";
	
}