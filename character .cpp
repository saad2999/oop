#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
class character
{
private:
	char c;
	int key;
public:
	character()
	{
		c = '\0';
		key = 0;
	}
	character(character &obj)
	{
		
		this->c = obj.c;
		this->key = obj.key;
		
	}

	character(char a)
	{
		c = a;
	}

	char getCharacter()
	{
		return c;
	}
	void setcharacter(char charact)
	{
		c = charact;

	}
	bool operator ==(char Pcharacter)
	{
		bool flag = 0;
		if (c == Pcharacter)
		{
			flag = 1;
			return flag;

		}
		else
		{
			return flag;
		}
	}
	void operator +()
	{
		if ((c>='A')&&(c<='Z'))
		{
			c = c - 32;
		}
		else  
		{
			c = (c + 32);
		}
	}
	void operator !()
	{
		
	}
	void dispaly()
	{
		cout << c << "\n";
	}
	
};
int main()
{
	char as = 'b';
	character  obj(as);
	+obj;
	obj.dispaly();

}