#include"Date.h"



Date::Date()
	{
		month = 12;
		day = 1;
		year = 2020;

	}
Date::Date(int mon, int d, int y)
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
	bool Date::vaidtycheck()
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


	Date::Date(const Date& obj)
	{





		this->month = obj.month;
		this->day = obj.day;
		this->year = obj.year;


	}

	void Date::setyear(int y)
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
	int Date::getyear()
	{
		return year;
	}
	void Date::setday(int d = 1)
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
	int Date::getday()
	{
		return day;

	}
	void Date::setmoth(int mon)
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
	int Date::getmonth()
	{

		return month;
	}
	bool Date::copyDate(Date& obj)
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
	bool Date::inputcompletedate(int mon, int d, int y)
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


	void Date::showDate()
	{
		cout << "day = " << day << "\n";
		cout << "month = " << month << "\n";
		cout << "year = " << year << "\n";
	}
	int Date::daysBetween(Date& o)
	{
		int m[12] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

		if (day > o.day)
		{
			o.day = o.day + m[month - 1];
			o.month = o.month - 1;


		}
		if (month > o.month)
		{
			o.year = o.year - 1;
			o.month = o.month + 12;
		}
		int dDays = o.day - day;
		int dmonth = o.month - month;
		int dyear = o.year - year;

		int differance = dDays + (dmonth * 30) + (dyear * 365);
		return differance;
	}
	int Date::operator -(Date& o)
	{
		int m[12] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

		if (day > o.day)
		{
			o.day = o.day + m[month - 1];
			o.month = o.month - 1;


		}

		if (month > o.month)
		{
			o.year = o.year - 1;
			o.month = o.month + 12;
		}
		int dDays = o.day - day;
		int dmonth = o.month - month;
		int dyear = o.year - year;


		int differance = dDays + (dmonth * 30) + (dyear * 365);
		return differance;
	}
	Date& Date::getDate() const
	{
		Date temp;
		temp.month = month;
		temp.day = day;
		temp.year = year;
		return temp;
	}
	void Date::retrieveDate(int& mon, int& d, int& yr)
	{
		month = mon;
		day = d;
		year = yr;


	}
	bool Date::isEqual(Date& obj)
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



