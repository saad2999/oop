#include"Name.h"
int main()
{
	char fn[40];
	char ln[40];
	char fn1[40];
	char ln1[40];

	cout << "enter first name\n";
	cin.getline(fn, 40);
	cout << "enter last name\n";
	cin.getline(ln, 40);
	Name s1(fn, ln);
	cout << "name length = " << s1.nameLength() << "\n";
	cout << "camel case\n";
	s1.camelCase();
	s1.display();
	cout << "enter first name in capital\n";
	cin.getline(fn1, 40);
	cout << "enter last name in capital\n";
	cin.getline(ln1, 40);

	Name s4(fn1, ln1);
	s4.toLower();
	s4.display();
	Name s3(fn, ln);
	s3.toUpper();
	s3.display();

}