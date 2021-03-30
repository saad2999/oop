class Paragraph
{
	Sentance* ParaAraay;
	int size;
public:
	Paragraph()
	{
		ParaAraay = nullptr;
		size = 0;

	}
	Paragraph(Sentance* s, int siz)
	{
		s = new Sentance[siz];
		for (int i = 0; i < siz; i++)
		{


			ParaAraay[i] = s[i];

		}



	}
	Paragraph(Paragraph& obj)
	{
		ParaAraay = new Sentance[obj.size];

		for (int i = 0; i < obj.size; i++)
		{
			ParaAraay[i] = obj.ParaAraay[i];
		}

	}
	void Setsize(int siz)
	{
		size = siz;
	}
	int getSize()
	{
		return size;
	}
	void SetParaAraay(Sentance* array, int length)
	{
		if (ParaAraay != nullptr)
		{
			delete[] ParaAraay;
		}
		ParaAraay = new Sentance[length];
		ParagraphCopy(ParaAraay, length, array);
	}
	Sentance* getParaAraay()
	{
		Sentance* array = nullptr;
		array = new Sentance[size];
		ParagraphCopy(array, size, ParaAraay);
		return array;

	}

	void operator +()
	{

		for (int i = 0; i < size; i++)
		{
			+ParaAraay[i];

		}

	}
	void operator -()
	{

		for (int i = 0; i < size; i++)
		{
			-ParaAraay[i];

		}

	}
	void operator *()
	{

		for (int i = 0; i < size; ++i)
		{
			*ParaAraay[i];

		}

	}
	void operator ~()
	{

		for (int i = 0; i < size; i++)
		{
			~ParaAraay[i];

		}

	}
	void operator=(Paragraph obj)
	{
		size = obj.size;
		for (int i = 0; i < size; i++)
		{
			ParaAraay[i] = obj.ParaAraay[i];
		}
	}
	bool operator==(Paragraph obj)
	{
		bool* arr = new bool[size];
		arr = {};
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			if (ParaAraay[i] == obj.ParaAraay[i])
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
	bool operator!=(Paragraph obj)
	{
		bool* arr = new bool[size];
		arr = {};
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			if (ParaAraay[i] != obj.ParaAraay[i])
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
		array[size] = nullptr;
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

	Paragraph* ch;
	int s = obj.getSize();

	for (int i = 0; i < s; i++)
	{
		out << ch[i];
	}

	return out;

}
void ParagraphCopy(Sentance* destination, int size, Sentance* source)
{
	//this function work same as strcpy_s
	for (int i = 0; i <= size - 1; i++)
	{
		destination[i] = source[i];

	}
	destination[size] = nullptr;
}



