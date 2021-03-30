
#include"MyString.h"

	MyString::MyString(int size)
	{
		array = new char[size];
		array[size] = {};
		count = 0;
	}
	MyString::MyString(MyString& obj)
	{
		int len = strlen(obj.array);
		len++;
		strcpy_s(array, len, obj.array);
	}

	MyString::MyString(const MyString& obj, int startingpoint, int endpoint)
	{
		for (int i = startingpoint; i <= endpoint; i++)
		{
			array[i] = obj.array[i];
		}
	}

	char* MyString::getarray() const
	{
		int length = 0;
		char* temp;
		length = strlen(array);
		length++;
		temp = new char(length);
		strcpy_s(temp, length, array);

		return temp;
	}
	int MyString::length() const
	{
		int len = 0;
		for (int i = 0; array[i] != '\0'; i++)
		{
			len++;
		}
		return len;


	}
	void MyString::add(char input)
	{
		array[count] = input;
		count++;
		array[count + 1] = '\0';
	}
	void MyString::clear()
	{
		array[100] = {};
		count = 0;
	}
	MyString MyString::operator +(const MyString& obj)
	{
		MyString temp;
		int len = 0;
		for (int i = 0; array[i] != '\0'; i++)
		{
			temp.array[i] = array[i];
			len++;
		}
		for (int i = 0; obj.array[i] != '\0'; i++)
		{
			temp.array[len] = obj.array[i];
			len++;
		}
		temp.count = len - 1;
		return temp;
	}
	char& MyString::operator [](int index)
	{
		int arraysize = strlen(array);
		if ((index > 0) && (index <= arraysize))
		{
			return array[index];
		}
	}
	MyString& MyString::operator ++()
	{
		for (int i = 0; array[i] != '\0'; i++)
		{
			++array[i];
		}
		return *this;
	}
	MyString& MyString::operator ++(int)
	{
		for (int i = 0; array[i] != '\0'; i++)
		{
			array[i]++;
		}
		return *this;

	}
	MyString& MyString::operator --()
	{
		for (int i = 0; array[i] != '\0'; i++)
		{
			--array[i];
		}
		return *this;
	}
	MyString MyString::operator --(int)
	{
		for (int i = 0; array[i] != '\0'; i++)
		{
			array[i]--;
		}
		return *this;
	}
	MyString& MyString:: operator = (MyString& obj)
	{
		int len = strlen(obj.array);
		len++;
		strcpy_s(array, len, obj.array);
		return *this;
	}

	MyString::~MyString()
	{
		delete[] array;
	}


void print(MyString& obj)
{
	char* ptr;
	ptr = obj.getarray();
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		cout << ptr[i] << " ";

	}

}
void print(const MyString& obj)
{

	char* ptr;
	ptr = obj.getarray();
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		cout << ptr[i] << " ";

	}

}
