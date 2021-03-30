#include<iostream>
using namespace std;
class inventory
{
private:
	int itemCode;
	char* itemName;
	int price;
	int EXyear;
	int Cyear;
public:
	inventory()
	{
		itemCode = 0;
		itemName = nullptr;
		price = 0;
		EXyear = 0;
		Cyear = 0;

	}
	inventory(int Icode, char* Iname, int pr, int EYEAR, int cY)
	{
		itemCode = Icode;
		price = pr;
		EXyear = EYEAR;
		Cyear = cY;

		char* temp;

		int size = strlen(Iname) + 1;
		temp= new char[size];
		strcpy_s(temp, size, Iname);
		itemName = temp;

	}
	inventory(inventory const& obj) {
		price = obj.price;
		itemCode = obj.itemCode;
		EXyear = obj.EXyear;
		Cyear = obj.Cyear;
		char* temp;
		int size = (strlen(obj.itemName) + 1);
		temp = new char[size];
		strcpy_s(temp, size, obj.itemName);
		this->itemName = temp;

	}
	void setprice(int p)
	{
		price = p;
	}
	void itemcode(int ic)
	{
		itemCode = ic;
	}
	void setexpaireyear(int ey)
	{
		EXyear = ey;
	}

	void setcurrentyear(int cy)
	{
		Cyear=cy;
	}
	void setname(char* name)
	{
		char* temp;
		int size = (strlen(name) + 1);
		temp = new char[size];
		strcpy_s(temp, size, name);
		itemName = temp;

		
	}



	int getprice()
	{
		return price;
	}
	int getcurentyear()
	{
		return Cyear;
	}
	int getexpaireyear()
	{
		return EXyear;
	}
	int getitemcode()
	{
		return itemCode;
	}


	void calP()
	{
		int year = EXyear - Cyear;
		if (year < 2)
		{
			price = (price / 100) * 40;
		}


	}
	void dispaly()
	{
		cout << "itemcode= " << itemCode;
		cout << "itemName= " << itemName;
		cout << "price= " << price;
		cout << "expire year= " << EXyear;
		cout << "current year= " << Cyear;
	}
	~inventory()
	{
		delete[]itemName;
	}

};
inventory compare(inventory obj, inventory obj1)
{
	if (obj.getprice() > obj1.getprice())
	{
		return obj;
	}
	else if (obj.getprice() == obj1.getprice())
	{
		return obj;
	}
	else
	{
		return obj1;

	}
}
int main()
{
	int pr, icode, Eyear, cyear;
	char name[20];
	cout << "enter price\n";
	cin >> pr;
	cout << "enter item code\n";
	cin >> icode;
	cout << "enter expaire\n";
	cin >> Eyear;
	cout << "enter current year\n";
	cin >> cyear;
	cout << "enter product name\n";
	cin.getline(name, 20);
	inventory obj;
	obj.setcurrentyear(2000);
	obj.setexpaireyear(2001);
	obj.setprice(60);
	cin.ignore();
	obj.setname(name);

	obj.calP();
	inventory obj2(obj);
	inventory obR;
	obR = compare(obj, obj2);
	obR.dispaly();
	return 0;
}