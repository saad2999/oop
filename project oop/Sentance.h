#pragma once
#include "Word.h"
class Sentance
{
	Word* senArray;
	int size;
public:
	Sentance();
	
	Sentance(Word* s, int siz);
	Sentance(Sentance& obj);
	void Setsize(int siz);
	int getSize();
	
	void SetsenArray(Word* array, int length);
	
	Word* getsenArray();
	

	void operator +();


	
	void operator -();
	void operator *();
	void operator ~();
	void operator=(Sentance obj);
	
	bool operator==(Sentance obj);
	bool operator!=(Sentance obj);
	
};
Word* Resizes(Word* arr, int size, Word var);

istream& operator>>(istream& in, Sentance& obj);
ostream& operator<<(ostream& out, Sentance& obj);
void sentanceCopy(Word* &destination, int size, Word* source);






