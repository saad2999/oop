#include <iostream> 
using namespace std;

class Complex
{
private:
	char* firstname;
	int* ptr;
	int real, imag;
public:
	Complex()
	{
		 firstname=new char[40];
		 
	//	real = r; imag = i;
	}
	friend ostream& operator << (ostream& out, const Complex& c);
	friend istream& operator >> (istream& i, Complex& c);
};

ostream& operator << (ostream& out, const Complex& c)
{
	out << c.real;
	out << "+i" << c.imag <<c.firstname;
	return out;
}

istream& operator >> (istream& i, Complex& c)
{
	cout << "Enter Real Part ";
	i >> c.real;
	c.ptr=&c.real;
	cout << "Enter Imaginary Part ";
	i >> c.imag;
	return i;
}

int main()
{
	Complex c1;
	cin >> c1;
	cout << "The complex object is ";
	cout << c1;
	return 0;
}
