#include "Name.h"
Name::Name(char* first = nullptr, char* last = nullptr)
{
	if (first != nullptr)
	{
		int len = strlen(first);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, first);

	}
	else
	{
		firstName = first;
	}
	if (last != nullptr)
	{
		int len = strlen(last);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, last);

	}
	else
	{
		lastName = last;
	}


}
Name::Name(const Name& obj)
{
	if (firstName != nullptr)
	{
		delete[] firstName;
		int len = strlen(obj.firstName);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, obj.firstName);
	}
	else
	{
		int len = strlen(obj.firstName);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, obj.firstName);
	}

	if (lastName != nullptr)
	{
		delete[] lastName;
		int len = strlen(obj.lastName);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, obj.lastName);
	}
	else
	{
		int len = strlen(obj.lastName);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, obj.lastName);
	}


}
void Name::copyName(Name& obj)
{
	if (firstName != nullptr)
	{
		delete[] firstName;
		int len = strlen(obj.firstName);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, obj.firstName);
	}
	else
	{
		int len = strlen(obj.firstName);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, obj.firstName);
	}

	if (lastName != nullptr)
	{
		delete[] lastName;
		int len = strlen(obj.lastName);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, obj.lastName);
	}
	else
	{
		int len = strlen(obj.lastName);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, obj.lastName);
	}
}
void Name::camelCase()
{
	if (firstName != nullptr)
	{
		firstName[0] = firstName[0] - 32;
	}
	if (lastName != nullptr)
	{
		lastName[0] = lastName[0] - 32;
	}

}
void Name::toLower()
{
	//asume  that all letters is in upper case

	if (firstName != nullptr)
	{
		for (int i = 0; firstName[i] != '\0'; i++)
		{
			firstName[i] = firstName[i] + 32;
		}
	}
		if (lastName != nullptr)
		{
			for (int i = 0; lastName[i] != '\0'; i++)
			{
				lastName[i] = lastName[i] + 32;
			}

		}

}
void Name::toUpper()
{
	//asume  that all letters is in lower case

	if (firstName != nullptr)
	{
		for (int i = 0; firstName[i] != '\0'; i++)
		{
			firstName[i] = firstName[i] - 32;
		}
	}
	if (lastName != nullptr)
	{
		for (int i = 0; lastName[i] != '\0'; i++)
		{
			lastName[i] = lastName[i] - 32;
		}

	}

}
int Name::nameLength()
{
	int len1 = strlen(firstName);
	int len2 = strlen(lastName);

	int length = len1 + len2;
	return length;
}
void Name::swapNames()
{
	int flength = strlen(firstName);
	int Llength = strlen(lastName);
	Llength = Llength + 1;
	flength = flength + 1;
	char* fname = new char[flength];
	char* Lname = new char[Llength];
	strcpy_s(fname, flength, firstName);
	strcpy_s(Lname, Llength, lastName);
	delete[]firstName;
	delete[]lastName;
	firstName= new char[Llength];
	lastName = new char[flength];
	strcpy_s(firstName, Llength, Lname);
	strcpy_s(lastName, flength, fname);
	delete[]fname;
	delete[]Lname;

}

char* Name::fullName()
{
	int len1 = strlen(firstName);
	int len2 = strlen(lastName);

	int length = len1 + len2;
	//adding 2 for null character and space
	length = length + 1;
	char* fullname = new char[length];
	
	for (int i = 0; firstName[i] != '\0'; i++)
	{
		fullname[i] = firstName[i];
	}
	fullname[len1 + 1] = ' ';
	len1 = len1 + 1;
	for (int i = 0; lastName[i] != '\0'; i++)
	{
		fullname[i] = lastName[i];
		len1++;
	}
	fullname[len1 + 1] = '\0';

	return fullname;
}
bool Name::isValidName()
{
	int l = strlen(firstName)+strlen(lastName);
	bool* bArray = new bool[l];
	bArray = { 0 };
	for (int i = 0; firstName[i]='\0';i++)
	{
		if( ((firstName[i] < 'A')|| (firstName[i] > 'Z'))&& (firstName[i] < 'a') || (firstName[i] > 'z'))
		{
			bArray[i] = 1;
		}
	}
	for (int i = 0; lastName[i] = '\0'; i++)
	{
		if (((lastName[i] < 'A') || (lastName[i] > 'Z')) && (firstName[i] < 'a') || (firstName[i] > 'z'))
		{
			bArray[i] = 1;
		}
	}


	int sum = 0;
	for (int i = 0; i < l; i++)
	{
		sum = bArray[i] + sum;
		
	}
	delete[]bArray;
	if (sum == 0)
	{
		return true;
	}
	else
		return false;

}
void Name::display()
{
	cout << "first Name = " << firstName << "\n";
	cout << "last Name = " << lastName << "\n";

}
Name& Name::operator =(Name& obj)
{
	if (firstName != nullptr)
	{
		delete[] firstName;
		int len = strlen(obj.firstName);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, obj.firstName);
	}
	else
	{
		int len = strlen(obj.firstName);
		len = len + 1;
		firstName = new char[len];
		strcpy_s(firstName, len, obj.firstName);
	}

	if (lastName != nullptr)
	{
		delete[] lastName;
		int len = strlen(obj.lastName);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, obj.lastName);
	}
	else
	{
		int len = strlen(obj.lastName);
		len = len + 1;
		lastName = new char[len];
		strcpy_s(lastName, len, obj.lastName);
	}
	return *this;

}



