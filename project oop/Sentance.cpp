#pragma once
#include "Sentance.h"
#include "Word.h"
void sentanceCopy(Word* &destination, int size, Word* source);


	Sentance::Sentance()
	{
		senArray = nullptr;
		size = 0;

	}
	Sentance::Sentance(Word* s, int siz)
	{
		s = new Word[siz];
		for (int i = 0; i < siz; i++)
		{


			senArray[i] = s[i];

		}



	}
	Sentance::Sentance(Sentance& obj)
	{
		senArray = new Word[obj.size];

		for (int i = 0; i < obj.size; i++)
		{
			senArray[i] = obj.senArray[i];
		}

	}
	void Sentance::Setsize(int siz)
	{
		size = siz;
	}
	int Sentance::getSize()
	{
		return size;
	}
	void Sentance::SetsenArray(Word* array, int length)
	{
		if (senArray != nullptr)
		{
			delete[] senArray;
		}
		senArray = new Word[length];
		sentanceCopy(senArray, length, array);
	}
	Word* Sentance::getsenArray()
	{
		Word* array = nullptr;
		array = new Word[size];
		sentanceCopy(array, size, senArray);
		return array;

	}

	void Sentance::operator +()
	{

		for (int i = 0; i < size; i++)
		{
			+senArray[i];

		}

	}
	void Sentance::operator -()
	{

		for (int i = 0; i < size; i++)
		{
			-senArray[i];

		}

	}
	void Sentance:: operator *()
	{

		for (int i = 0; i < size; ++i)
		{
			*senArray[i];

		}

	}
	void Sentance ::operator ~()
	{

		for (int i = 0; i < size; i++)
		{
			~senArray[i];

		}

	}
	void Sentance:: operator=(Sentance obj)
	{
		size = obj.size;
		for (int i = 0; i < size; i++)
		{
			senArray[i] = obj.senArray[i];
		}
	}
	bool Sentance ::operator==(Sentance obj)
	{
		bool* arr = new bool[size];
		arr = {};
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			if (senArray[i] == obj.senArray[i])
			{
				arr[i] = 1;
			}
			sum += arr[i];
			delete[] arr;

			if (sum == 0)
			{

				return true;
			}
			else
			{
				return false;
			}




		}

	}
	bool Sentance:: operator!=(Sentance obj)
	{
		bool* arr = new bool[size];
		arr = {};
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			if (senArray[i] != obj.senArray[i])
			{
				arr[i] = 1;
			}
			sum += arr[i];
			delete[] arr;

			if (sum == 0)
			{

				return true;
			}
			else
			{
				return false;
			}




		}

	}





Word* Resizes(Word* arr, int size, Word var)
{
	Word* array = nullptr;
	if (arr == nullptr)
	{
		arr = new Word[1];
		arr[0] = var;
		size = 1;
	}
	else
	{
		delete[] arr;
		arr = nullptr;

		array = new Word[size + 2];
		size = size + 2;
		sentanceCopy(array, size - 1, arr);
		array[size - 1] = var;
		array[size] = nullptr;
		arr = array;

		return arr;

	}
}


istream& operator>>(istream& in, Sentance& obj)
{
	Word* wor = nullptr;
	Word wh;
	int size = 0;
	Word* arr = obj.getsenArray();
	char ch = '\0';
	while (ch != '.')
	{
		in.get(ch);

		cin >> wh;

		wor = Resizes(wor, size, wh);

	}


	return in;
}

ostream& operator<<(ostream& out, Sentance& obj)
{

	Sentance* ch;
	int s = obj.getSize();

	for (int i = 0; i < s; i++)
	{
		out << ch[i];
	}

	return out;

}
void sentanceCopy(Word* &destination, int size, Word* source)
{
	//this function work same as strcpy_s
	for (int i = 0; i <= size - 1; i++)
	{
		destination[i] = source[i];

	}
	destination[size] = nullptr;
}

