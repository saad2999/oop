#include<iostream>
using namespace std;
class mammal
{
private:
	int age;
	char* skintone;
public:
	mammal()
	{
		age = 0;
		skintone = nullptr;
		cout << "mamal constructor call\n";


	}
	mammal(char* skin,int ag)
	{
		cout << "mamal overloaded constructor call\n";
		
			int len = strlen(skin);
			len = len + 1;
			skintone = new char[len];
			strcpy_s(skintone, len, skin);
			age = ag;
		

	}
	void setskintone(char* sk)
	{
		if (skintone != nullptr)
		{
			delete[] skintone;
			skintone = nullptr;
			
		}
		int len = strlen(sk);
		len = len + 1;
		skintone = new char[len];
		strcpy_s(skintone, len, sk);

	}
	char* getskintone()
	{
		char* skin;
		int len = strlen(skintone);
		len = len + 1;
		skin = new char[len];
		strcpy_s(skin, len, skintone);
		return skin;
	}
	void setage(int ag)
	{
		age = ag;
	 }
	int getage()
	{
		return age;
	}

	virtual~mammal()
	{
		
		cout << "mamal destructor call\n";
		delete[] skintone;
		skintone = nullptr;
		
	}
	virtual void dispaly()
	{
		cout << "saad\n";
	}



};
class human:public mammal
{
	char* name;
public:
	human()
	{
		cout << "human constructor call\n";
		name = nullptr;
	}
	human(char* na, char* skin, int ag) :mammal(skin, ag)
	{
		cout << "human overloaded constructor call\n";
		int len = strlen(na);
		len = len + 1;
		name = new char[len];
		strcpy_s(na, len, name);


	}

	void setname(char* na)
	{
		if (name != nullptr)
		{
			delete[] name;
			name = nullptr;

		}
		int len = strlen(na);
		len = len + 1;
		name = new char[len];
		strcpy_s(name, len, na);

	}
	char* getname()
	{
		char* na;
		int len = strlen(name);
		len = len + 1;
		na= new char[len];
		strcpy_s(na, len, name);
		return na;
	}
	 void dispaly()
	{
		cout << "name =" << name<<"\n";
	}
	~human()
	{
		cout << "humam destructor call\n";
		delete[] name;
		name = nullptr;
	}


};

class whale :public mammal
{
	float weight;
public:
	whale()
	{
		cout << "whale constructor call\n";
		weight = 0;
	}
	whale(float we, char* skin, int ag) :mammal(skin, ag)
	{
		cout << "whale overloaded constructor call\n";
		weight = we;

	}

	void setweight(float we)
	{
		weight = we;
	}
	float getweight()
	{
		return weight;
	}
	void dispaly()
	{
		cout << "weight =" << weight << "\n";
	}
	~whale()
	{
		cout << "whale destructor call\n";
		
	}


};
int main()
{
	char name[20] = { 's','a','a','d' };
	char skin[20] = { 's','o','f','t' };
	mammal*m= new mammal;
  
    whale h(60.9, skin, 19);
   m = &h;
   m->dispaly();
   
   delete m;

  /*if we do not make destructor virual it cause memory leakage*/
	return 0;
}

