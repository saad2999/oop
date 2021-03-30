#pragma once
#include "character.h"
void WordCopy(character* destination, int size, character* source);
int Wordlen(character* array);
void WordCopy(character* destination, int size, char* source);
class Word
{
	character* word;
	int size;
public:
	Word();
	
	Word(character* array, int siz);
	
	Word(Word& obj);
	
	void setWord(character* w);
	
	character* getWord();
	
	void Setsize(int siz);
	int getSize();
	Word operator=(Word);
	
	void operator +();
	
	void operator -();
	
	void operator *();
	
	void operator ~();
	
	bool operator ==(Word obj);
	
	bool operator !=(Word obj);
	

	character* operator[](int index);
	~Word();
	
};
character* Resize(character* Wor, int length, char ch);

istream& operator>>(istream& in, Word& obj);


	


ostream& operator<<(ostream& out, Word& obj);


int Wordlen(character* array);

	//this function work same as strlen

void WordCopy  (character* &destination, int size, character* source);

void WordCopy(character* &destination, int& size, char* source);


