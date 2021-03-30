#include<iostream>
using namespace std;
class MyString
{
private:
	char* array;
	int count;
public:
	MyString(int size = 100);
	MyString(MyString& obj);
	MyString(const MyString& obj, int startingpoint, int endpoint);
		char* getarray() const;
	void add(char input);
	void clear();
	MyString operator +(const MyString& obj);
	char& operator [](int index);
	MyString& operator ++();
	MyString& operator ++(int);
	MyString& operator --();
	MyString operator --(int);
	MyString& operator = (MyString& obj);
	~MyString();
	int	length() const;
	

};
void print(MyString& obj);
void print(const MyString& obj);
