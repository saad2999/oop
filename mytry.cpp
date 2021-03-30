#include<iostream>
using namespace std;
class one
{
protected:
	int a;
	int b;
public:
	one()
	{
		a = 0;
		b = 0;
	}
	one(int t,int i)
	{
		a = t;
		b = i;

	}
	void dispaly()
	{
		cout << "a = " << a << "\n";
		cout << "b = " << b << "\n";
	}
};
class two:protected one
{
protected:
	int c;
	int d;
public:
	two()
	{
		c = 0;
		d = 0;
	}
	two(int i ,int e,int j, int k):one(i,e)
	{
		c = j;
		d = k;

	}
	void dispaly()
	{
		one::dispaly();
		cout << "c = " << c << "\n";
		cout << "d = " << d << "\n";
	}
};
int main()
{
	two t(2, 5, 6, 8);
	t.dispaly();
}