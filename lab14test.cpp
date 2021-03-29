#include<iostream> 
using namespace std;
class A
{
public:
	A() { cout << "A's constructor called" << endl; }
	void display()
	{
		cout << "this is class 'A'\n";
	}
};
class B
{
public:
	B() { cout << "B's constructor called" << endl; }
	void display()
	{
		cout << "this is class 'B'\n";
	}
};

class C : public B, public A // Note the order 
{
public:
	C() { cout << "C's constructor called" << endl; }
};
int main()
{
	C c;
	c.B::display();
	/*this function is ambious because this function inherit more than one
	 time 
	 solution: call explicitly
	 */
	return 0;
}
