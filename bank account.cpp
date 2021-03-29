#include<iostream>
using namespace std;
class BankAccount
{
protected:
	char* title;
	int accountnumber;
	double balance;
	int dateofopening;
public:
	BankAccount()
	{
		title = nullptr;
		accountnumber = 0;
		balance = 0;
		dateofopening = 0;
	}
	BankAccount(char* TITLE,int cnumber,double bal,int date)
	{
		
		int size = (strlen(TITLE) + 1);
		title = new char[size];
		strcpy_s(title, size, TITLE);

		accountnumber = cnumber;
		balance = bal;
		dateofopening = date;
		

	} 
	void setTitle(char*TITLE)
	{
		int size = (strlen(TITLE) + 1);
		title = new char[size];
		strcpy_s(title, size, TITLE);

	}
	char* getTitle()
	{
		char* TITLE;
		int size = (strlen(title) + 1);
		TITLE = new char[size];
		strcpy_s(TITLE, size, title);
		return TITLE;

	}
	void setaccountnumber(int c)
	{
		accountnumber = c;
	}
	int getaccountnumber()
	{
		return accountnumber;
	}

	void setbalance(double bal)
	{
		balance = bal;
	}
	double getbalance()
	{
		return balance;
	}
	void setdateofopening(int d)
	{
		dateofopening = d;
	}
	int getdateofopening()
	{
		return dateofopening;
	}
	


	bool deposit(double d)
	{
		bool a=0;
		if (balance == 0)
		{
			balance = d;
			a = 1;
		}
		else
		{
			balance += d;
			a = 1;
		}
		return a;

	}
	bool withdraw(double mount)
	{
		balance -= mount;
		return true;
		

	}
	void dispaly()
	{
		cout << "Title = " << title << "\n";
		cout << "account number = " << accountnumber << "\n";
		cout << "balance = " << balance << "\n";
		cout << "date of opening" << dateofopening << "\n";

	}
	~BankAccount()
	{
		delete[] title;
		title = nullptr;
	}


};
class savingaccount:protected BankAccount
{
private:
	double interest;
public:
	savingaccount()
	{
		interest = 0;

	}
   	savingaccount(double i)
	{
		interest = i;

	}
	void setinterest(double i)
	{
		interest = i;

	}
	double getinterest()
	{
		return interest;
	}
	void calinterestrate()
	{
		int temp=balance *  interest * 1 / 100;
		if ((deposit) || (withdraw))
		{
			balance -= temp;
		}
	}
	
};
class checkingaccount:protected BankAccount
{
private:
	int fee;
public:
	checkingaccount(int f = 0)
	{
		fee = f;
	}
	void setfee(int f)
	{
		fee = f;
	}
	int getFee()
	{
		return fee;
	}
	void calFee()
	{
		if ((deposit) || (withdraw))
		{
			balance -= fee;
		}
	}


};
int main()
{
	
	char title[50] = { 'a','b','d','u','a','l','l','a','h' };
	BankAccount b(title, 1234, 50000, 23122020);// date is in decimal
	b.dispaly();
	savingaccount s(5);// in persentage per year
	s.calinterestrate();
	checkingaccount c(500);
	c.calFee();
	b.dispaly();
}