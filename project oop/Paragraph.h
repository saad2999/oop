#pragma once
#include "Sentance.h"
class Paragraph
{
	Sentance* ParaAraay;
	int size;
public:
	Paragraph();

	Paragraph(Sentance* s, int siz);
	
	Paragraph(Paragraph& obj);
	void Setsize(int siz);
	
	int getSize();
		void SetParaAraay(Sentance* array, int length);
	Sentance* getParaAraay();
	

	void operator +();
	
	void operator -();
	
	
	void operator *();
	
	
	void operator ~();
	
	void operator=(Paragraph obj);
	
	bool operator==(Paragraph obj);
	
			
	bool operator!=(Paragraph obj);
	
};
Sentance* Resizes(Sentance* arr, int size, Sentance var)
{
	Sentance* array = nullptr;
	if (arr == nullptr)
	{
		arr = new Sentance[1];
		arr[0] = var;
		size = 1;
	}
	else
	{
		delete[] arr;
		arr = nullptr;

		array = new Sentance[size + 2];
		size = size + 2;
		ParagraphCopy(array, size - 1, arr);
		array[size - 1] = var;
		array[size];
		arr = array;

		return arr;

	}
}


istream& operator>>(istream& in, Paragraph& obj)
{
	Sentance* wor = nullptr;
	Sentance wh;
	int size = 0;
	Sentance* arr = obj.getParaAraay();
	char ch = '\0';
	while (ch != '.')
	{
		in.get(ch);

		cin >> wh;

		wor = Resizes(wor, size, wh);

	}
	//obj.setSentance(wor);

	return in;
}

ostream& operator<<(ostream& out, Paragraph& obj)
{

	Sentance* ch = obj.getParaAraay();
	int s = obj.getSize();

	for (int i = 0; i < s; i++)
	{
		out << ch[i];
	}

	return out;

}
void ParagraphCopy(Sentance*& destination, int size, Sentance* source)
{
	//this function work same as strcpy_s
	for (int i = 0; i <= size - 1; i++)
	{
		destination[i] = source[i];

	}
	//destination[size] =nullptr ;
}






