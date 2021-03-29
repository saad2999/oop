#include<iostream>

using namespace std;
class Date {
private:

	int day;
	int month;
	int year;


public:
	Date();
	Date(int, int, int);
	bool vaidtycheck();
	Date(const Date&);
	void setyear(int);
	int getyear();
	void setday(int);
	int getday();
	void setmoth(int);
	int getmonth();
	bool copyDate(Date&);
	bool inputcompletedate(int mon, int d, int y);
	void showDate();
	int daysBetween(Date& o);
	int operator -(Date& o);
	Date& getDate() const;
	void retrieveDate(int& mon, int& d, int& yr);
	bool isEqual(Date& obj);
};

 
