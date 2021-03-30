#include "Word.h"
#include "character.h"

void WordCopy(character* destination, int size, character* source);
int Wordlen(character* array);
void WordCopy(character* destination, int size, char* source);

Word::Word()
	{
		word = nullptr;
		size = 0;

	}

Word::Word(character* array, int siz)
	{
		int s = (Wordlen(array) + 1);

		word = new character[s];
		WordCopy(word, s, array);
		size = siz;

	}
Word::Word(Word& obj)
	{
	cout << "copy con calls";
		WordCopy(word, obj.size, obj.word);
		this->size = obj.size;
	}
	void Word::setWord(character* w)
	{
		size = Wordlen(w);
		size += 1;
		word = new character[size];
		WordCopy(this->word, size, w);
	}
	character* Word::getWord()
	{
		character* wor;
		size = Wordlen(word);
		size += 1;
		cout << size;
		wor = new character[size];
		WordCopy(wor, size, word);
		return wor;
	}
	void Word::Setsize(int siz)
	{
		size = siz;
	}
	int Word :: getSize()
	{
		return size;
	}
	Word Word::operator=(Word obj)
	{
		
		int size = Wordlen(obj.word);
		WordCopy(word, size, obj.word);
		this->size = obj.size;
		return *this;
	}
	void Word::operator +()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			+word[i];

		}

	}
	void Word::operator -()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			-word[i];

		}

	}
	void Word::operator *()
	{

		for (int i = 0; word[i] != '\0;'; ++i)
		{
			*word[i];

		}

	}
	void Word::operator ~()
	{

		for (int i = 0; word[i] != '\0;'; i++)
		{
			~word[i];

		}

	}
	bool Word::operator ==(Word obj)
	{
		const int  siz = Wordlen(word);
		bool* arr = new bool[siz];
		arr = {};
		int sum = 0;
		for (int i = 0; i < siz; i++)
		{
			if (word[i].getCharacter() == obj.word[i].getCharacter())
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
	bool Word :: operator !=(Word obj)
	{
		const int  siz = Wordlen(word);
		bool* arr = new bool[siz] {};
		int sum = 0;
		for (int i = 0; i < siz; i++)
		{
			if (word[i].getCharacter() != obj.word[i].getCharacter())
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

	character* Word::operator[](int index)
	{
		//for test purpose
		this->word = new character[10];
		return &word[index];
	}

	Word::~Word()
	{
		delete[] word;
		word = nullptr;
	}


character* Resize(character* Wor, int length, char ch)
{
	character* array = nullptr;
	if (Wor == nullptr)
	{
		Wor = new character[1];
		Wor[0] = ch;
		length = 1;
	}
	else
	{
		delete[] array;
		array = nullptr;

		array = new character[length + 2];
		length = length + 2;
		for (int i = 0; i < length - 1; i++)
		{
			array[i] = Wor[i];

		}
		array[length - 1] = ch;
		array[length] = '\0';
		Wor = array;

		return Wor;

	}
}
istream& operator>>(istream& in, Word& obj)
{
	character* wor = nullptr;
	char ch = '\0';
	int size = 0;

	while (ch != ' ')
	{
		in.get(ch);
		wor = Resize(wor, size, ch);

	}
	obj.setWord(wor);

	return in;
}

ostream& operator<<(ostream& out, Word& obj)
{

	character* ch = obj.getWord();
	//cout << Wordlen(ch);
	for (int i = 0; ch[i] != '\0'; i++)
	{
		out << ch[i];
	}

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
void WordCopy(character* &destination, int size, character* source)
{
	//this function work same as strcpy_s
	for (int i = 0; i <= size - 1; i++)
	{
		destination[i] = source[i];

	}
	destination[size] = '\0';
}
void WordCopy(character* &destination, int& size, char* source)
{
	//this function work same as strcpy_s
	for (int i = 0; i <= size - 1; i++)
	{
		destination[i] = source[i];

	}
	destination[size] = '\0';
}
