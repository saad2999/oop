#include "character.h"
#include<iostream>
#include<fstream>
#include<string.h>
void WordCopy(character* destination, int size, character* source);
int Wordlen(character* array);
class Word
{
	character* word;
	int size;
public:
	Word()
	{
		word = nullptr;
		size = 1;
	}
	Word(Word& obj)
	{
		WordCopy(word, obj.size, obj.word);
		this->size = obj.size;
	}
	void setWord(character* w)
	{
		int size = Wordlen(w);
		size += 1;
		word = new character[size];
		WordCopy(this->word, size, w);
	}
	character* getWord()
	{
		character* wor;
		int size = Wordlen(word);
		size += 1;
		wor = new character[size];
		WordCopy(wor, size, word);
		return wor;
	}
	void Setsize(int siz)
	{
		size = siz;
	}
	int getSize()
	{
		return size;
	}
	character* operator=(character* wor)
	{
		int size = Wordlen(wor);
		WordCopy(word, size, wor);

	}
	void operator +()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			+word[i];

		}

	}
	void operator -()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			-word[i];

		}

	}
	void operator *()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			*word[i];

		}

	}
	void operator ~()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			~word[i];

		}

	}
	bool operator ==(character* array)
	{
		const int  siz = Wordlen(word);
		bool* arr = new bool[siz];
		arr = {};
		int sum = 0;
		for (int i = 0; i < siz; i++)
		{
			if (word[i].getCharacter() == array[i].getCharacter())
			{
				arr[i] = 1;
			}
			sum += arr[i];

		}
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
	bool operator !=(character* array)
	{
		const int  siz = Wordlen(word);
		bool* arr = new bool[siz];
		int sum = 0;
		for (int i = 0; i < siz; i++)
		{
			if (word[i].getCharacter() != array[i].getCharacter())
			{
				arr[i] = 1;
			}
			sum += arr[i];

		}
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

	character* operator[](int index)
	{
		//for test purpose
		this->word = new character[10];
		return &word[index];
	}

};
ostream& operator<<(ostream& out, Word& obj)
{

	character* ch = obj.getWord();
	out << ch;
	return out;

}

int Wordlen(character* array)
{
	//this function work same as strlen
	int size = 0;
	for (int i = 0; array[i] != '\0'; i++)
	{
		size++;
	}
	return size;

}
void WordCopy(character* destination, int size, character* source)
{
	//this function work same as strcpy_s
	for (int i = 0; i < size; i++)
	{
		destination[i] = source[i];

	}
	destination[size] = '\0';
}


int main()
{
	Word o;
	o[0]->setcharacter('s');
	o[1]->setcharacter('a');
	o[2]->setcharacter('a');
	o[3]->setcharacter('d');
	cout << o;
	/*char as = 'C';
	char as1 = 'C';
	char as2 = 'C';
	ifstream o;
	o.open("saad.txt", ios::in);

	character  obj(as);
	 *obj;
	 o >> obj;
	 int size = 100;
	 char* name = new char[200];
	 for (int j = 0; j <3; j++)
	 {
		 cin.get(name, size);
			 }
	// cin.get(name,size);
	 cout << name<<'\n';
	 int count = 0;
	 int scount = 0;
	 for (int i = 0; name[i]!='\0' ; i++)
	 {
		 if (name[i] == '\n')
		 {
			 count++;
		 }
		 if (name[i]==' ')
		 {
			 scount++;
		 }
	 }
	cout<<"\n\n" << count;
	 cout<< "\n\n" << scount;


	//obj.dispaly();
	~obj;
	//obj.dispaly();

	character  obj1(as1);
	obj1;
	//cout<<obj;
	//obj1.dispaly();
	-obj1;
	//obj1.dispaly();

	character  obj2(as2);
	*obj2;

	//obj2.dispaly();
	~obj2;
	//obj2.dispaly();*/

}