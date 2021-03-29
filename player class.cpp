#include<iostream>
using namespace std;
class player 
{
private:
	char* name;
	int age;
	static int count;
public:
	player()
	{
		name = nullptr;
		age = 0;
		count++;
	}
	player(char* na,int age)
	{
		int len=strlen(na);
		len++;
		name = new char[len];
		strcpy_s(name, len, na);
		this->age = age;

	}
	void setname(char* na)
	{
		int len = strlen(na);
		len++;
		name = new char[len];
		strcpy_s(name, len, na);


   }
	char* getname()
	{
		char* temp;
		int len = strlen(name);
		
		temp = new char[len];
		strcpy_s(temp, len, name);
		return temp;
	}
	void setage(int a)
	{
		age = a;

	}
	int getage()
	{
		return age;
	}
	static int getcount()
	{
		return count;
	}
	void dispaly() 
	{
		cout << "name = " << name<<"\n";
		cout<< "age = " << age << "\n";

	}
	~player()
	{
		delete[] name;
	}


};
int player::count = 0;

int main()
{
	
	int age1;
	char* name1 = new char[20];
	int age2;
	char* name2 = new char[20];

	cout << "enter the name of player\n";
	cin.getline(name1, 20);
	cout << "enter the age of player\n";
	cin >> age1;
	player s1(name1, age1);
	cout << "enter the name of player\n";
	cin.getline(name2, 20);
	cout << "enter the age of player\n";
	cin >> age2;
	player s2(name2,age2);

	cout<<"number of objects in" <<s1.getcount()<<"\n";
}