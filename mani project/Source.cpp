#include<iostream>
#include<fstream>
using namespace std;
class wordProcessor
{
public:
	char* readname;
	char**** storeData;
public:
	
	
};

int main()
{
	
	int size=1;
	char**** arrary;
	arrary = new char***[size];
	for (int i = 0; i < size; i++)
	{
		arrary[i] = new char** [size];
		for (int j = 0; j < size; j++)
		{
			arrary[i][j] = new char* [size];
			
			for (int k = 0; k < size; k++)
			{
				arrary[i][j][k] = new char[size];
			}

		}
	}
	ifstream obj1;
	obj1.open("saad.txt", ios::in);
	while (!obj1.eof());
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				for (int l = 0; l < size; l++)
				{
					obj1.get(array[i][j][k][l]);
					
				

				}

			}
		}
	}
	
}

	