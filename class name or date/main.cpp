#include"Date.h"




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
	cout <<"differance = "<< s1.daysBetween(s2) << "\n";
	cout <<"check if equal = "<< s1.isEqual(s2) << "\n";
	cout << "showing date object 1" << "\n";
	s1.showDate();
	cout << "showing date object 2" << "\n";
	s2.showDate();
	return 0;
}