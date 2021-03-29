#include <iostream> 
using namespace std;
float* copy(const float* P, const int& s)
{
	float* a = new float[s];
	for (int i = 0; i < s; i++)
	{
		a[i] = P[i];
	}
	return a;
}

Numbers *dcopy(const Numbers* p, const int& s)
{
	Numbers* a = new Numbers[s];
	for (int i = 0; i < s; i++)
	{
		a[i] = p[i];

	}
	return a;
}
class Numbers
{
	int no;
	float* elements;
public:
	Numbers(const int n = 0, const float* p = 0)
	{
		no = n;
		elements = copy(p,no);
	}

	Numbers(const Numbers& f)
	{
		no = f.no;
		elements = copy(f.elements, no);
	}
	void print() const {
		cout << "<Numbers: no = " << no << "elements :{";
		for (int i = 0; i < no; i++) {
			cout << elements[i];
			if (i < no - 1)
			{
				cout << ", ";
			}
		}
		cout << "} </Numbers> ";
	}

};

class FunWithNumbers
{
	const int size; Numbers* values;
public:
	FunWithNumbers(const int& n = 0,  Numbers* p = 0) :size(n)
	{
		values = dcopy(p, size);
	}
	FunWithNumbers(const FunWithNumbers& mc):size(mc.size)
	{
		values = dcopy(values, mc.size);
	}


	void print()
	{
		cout << "<FunWithNumbers: Size " << size << " values = { ";
		for (int i = 0; i < size; i++)
		{
			 values[i].print();
			if (i < size - 1)
			{
				cout << ", ";
			}
		}
		cout << " }</ FunwithNumbers>\n" << endl;
	}
	bool operator==(FunWithNumbers obj)
	{

		if (size == obj.size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};
	int main()

	{
		const float fa[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
		Numbers N(5, fa);
		Numbers M(3, fa);
		Numbers* na = new Numbers[2];
		na[0] = N;
		na[1] = M;
		FunWithNumbers F(2, na);
		F.print();
		return 0;
	}
	

