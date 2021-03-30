#include<iostream>
#include<string.h>

using namespace std;
class Student
{
protected:
	char* name;
	int age;
	int studentID;
	Student()
	{
		name = nullptr;
		age = 0;
		studentID = 0;
	}
	Student(char* nam, int ag, int stuID)
	{
		int size = (strlen(nam) + 1); 
		name = new char[size];
		strcpy_s(name, size, nam);
		age = ag;
		studentID = stuID;


	}
	void setname(char* nam)
	{
		if (nam != nullptr)
		{
			delete[] nam;
			int size = (strlen(nam) + 1);
			name = new char[size];
			strcpy_s(name, size, nam);

		}
		else
		{
			int size = (strlen(nam) + 1);
			name = new char[size];
			strcpy_s(name, size, nam);

		}

	}
	char* getname()
	{
		char* nam=nullptr;
		int size = (strlen(name) + 1);
		nam = new char[size];
		strcpy_s(nam, size, name);
		return nam;

	}
	void setage(int ag)
	{
		age = ag;
	}
	int getage()
	{
		return age;
	}
	void setstudentID(int stuID)
	{
		studentID = stuID;
	}
	int getstudentID()
	{
		return studentID;
	}
	void dispaly()
	{
		cout << "Name =" << name << "\n";
		cout << "Age =" << age << "\n";
		cout << "Student ID =" << studentID << "\n";
	}

	~Student()
	{
		delete[] name;
	}

};
class UndergraduateStudent:protected Student
{
protected:
	char* majorSubject;
	int noOFSubjects;
	char section;
public:
	UndergraduateStudent()
	{
		majorSubject = nullptr;
		noOFSubjects = 0;
		section = 0;
			
    }
	UndergraduateStudent(char*na,int ag,int stuid, char*MS,int ns,char sec ):Student(na,ag,stuid)
	{
		int size = (strlen(MS) + 1);
		name = new char[size];
		strcpy_s(majorSubject, size, MS);
		noOFSubjects = ns;
		section = sec;

	}
	void setmajorSubject(char* MS)
	{
		if (MS != nullptr)
		{
			delete[] MS;
			int size = (strlen(MS) + 1);
			majorSubject = new char[size];
			strcpy_s(majorSubject, size, MS);

		}
		else
		{
			int size = (strlen(MS) + 1);
			majorSubject = new char[size];
			strcpy_s(majorSubject, size, MS);

		}

	}
	char* getmajorSubject()
	{
		char* MS = nullptr;
		int size = (strlen(majorSubject) + 1);
		MS = new char[size];
		strcpy_s(MS, size, majorSubject);
		return MS;

	}
	void setnoOFSubjects(int nof)
	{
		noOFSubjects = nof;

	}
	int getnoOFSubjects()
	{
		return noOFSubjects;
	}
	void setSection(char c)
	{
		section = c;
	}
	void dispaly()
	{
		Student::dispaly();
		cout << "Major subject =" <<majorSubject  << "\n";
		cout << "numbers of subjects =" << noOFSubjects << "\n";
		cout << "Section =" << section << "\n";
	}
	char getSetion()
	{
		return section;
	}
	~UndergraduateStudent()
	{
		delete[] majorSubject;
		majorSubject = nullptr;
	}

};
class Freshman :protected UndergraduateStudent
{
private:
	int DurationinMONTHS;
public:
	Freshman()
	{
		DurationinMONTHS = 0;
	}
	Freshman(int DM, char* name, int age, int stuID, char* MS, int noSubject, char sec) :UndergraduateStudent(name, age, stuID, MS, noSubject, sec)
	{
		if (DM <= 24)
		{
			DurationinMONTHS = DM;
		}

	}
	void setDurationinMONTHS(int DM)
	{
		if (DM <= 24)
		{
			DurationinMONTHS = DM;
		}
	}
	int getDurationinMONTHS()
	{
		return DurationinMONTHS;
	}
	void dispaly()
	{
		UndergraduateStudent::dispaly();
		cout << "Durationin Months =" << DurationinMONTHS << "\n";
	}

};
class Sophomore :protected UndergraduateStudent
{
private:
	int DurationinMONTHS;
public:
	Sophomore()
	{
		DurationinMONTHS = 0;
	}
	Sophomore(int DM, char* name, int age, int stuID, char* MS, int noSubject, char sec) :UndergraduateStudent(name, age, stuID, MS, noSubject, sec)
	{
		if ((DM >= 12)&&(DM <= 24))
		{
			DurationinMONTHS = DM;
		}

	}
	void setDurationinMONTHS(int DM)
	{

		 if ((DM >= 12) && (DM <= 24))
		{
			DurationinMONTHS = DM;
		}
	}
	int getDurationinMONTHS()
	{
		return DurationinMONTHS;
	}
	void dispaly()
	{
		UndergraduateStudent::dispaly();
		cout << "Durationin Months =" << DurationinMONTHS << "\n";
	}

};
class Junior :protected UndergraduateStudent
{
private:
	int DurationinMONTHS;
public:
	Junior()
	{
		DurationinMONTHS = 0;
	}
	Junior(int DM, char* name, int age, int stuID, char* MS, int noSubject, char sec) :UndergraduateStudent(name, age, stuID, MS, noSubject, sec)
	{
		if ((DM <= 24)&& (DM >= 36))
		{
			DurationinMONTHS = DM;
		}

	}
	void setDurationinMONTHS(int DM)
	{

		 if ((DM >= 24) && (DM >= 36))
		{
			DurationinMONTHS = DM;
		}
	}
	int getDurationinMONTHS()
	{
		return DurationinMONTHS;
	}
	void dispaly()
	{
		UndergraduateStudent::dispaly();
		cout << "Durationin Months =" << DurationinMONTHS << "\n";
	}

};

class Senior:protected UndergraduateStudent
{
private:
	int DurationinMONTHS;
public:
	Senior()
	{
		DurationinMONTHS = 0;
	}
	Senior(int DM, char* name, int age, int stuID, char* MS, int noSubject, char sec) :UndergraduateStudent(name, age, stuID, MS, noSubject, sec)
	{
		if (DM >= 36)
		{
			DurationinMONTHS = DM;
		}

	}
	void setDurationinMONTHS(int DM)
	{

		if (DM >= 36)
		{
			DurationinMONTHS = DM;
		}
	}
	int getDurationinMONTHS()
	{
		return DurationinMONTHS;
	}
	void dispaly()
	{
		UndergraduateStudent::dispaly();
		cout << "Durationin Months =" << DurationinMONTHS << "\n";
	}

};

class GraduateStudent :protected Student
{
protected:
	char* digreename;
	int noOFSubjects;
	char section;
public:
	GraduateStudent()
	{
		digreename = nullptr;
		noOFSubjects = 0;
		section = NULL;

	}
	GraduateStudent(char* na, int ag, int stuid, char* DN, int ns, char sec) :Student(na, ag, stuid)
	{
		int size = (strlen(DN) + 1);
		name = new char[size];
		strcpy_s(digreename, size, DN);
		noOFSubjects = ns;
		section = sec;

	}
	void setDigreename(char* DN)
	{
		if (DN != nullptr)
		{
			delete[] DN;
			int size = (strlen(DN) + 1);
			 digreename= new char[size];
			strcpy_s(digreename, size, DN);

		}
		else
		{
			int size = (strlen(DN) + 1);
			digreename = new char[size];
			strcpy_s(digreename, size, DN);

		}

	}
	char* getmajorSubject()
	{
		char* DN = nullptr;
		int size = (strlen(digreename) + 1);
		DN = new char[size];
		strcpy_s(DN, size, digreename);
		return DN;

	}
	void setnoOFSubjects(int nof)
	{
		noOFSubjects = nof;

	}
	int getnoOFSubjects()
	{
		return noOFSubjects;
	}
	void setSection(char c)
	{
		section = c;
	}
	char getSetion()
	{
		return section;
	}
	void dispaly()
	{
		Student::dispaly();
		cout << "Digree Name = " << digreename << "\n";
		cout << "numbers of subjects = " << noOFSubjects << "\n";
		cout << "Section = " << section << "\n";
	}
	~GraduateStudent()
	{
		delete[] digreename;
		digreename = nullptr;
	}

};
class MastersStudent :protected GraduateStudent
{  
private:
	char* majorSubject;
	int totalCradithour;
	int EarnCradithour;
public:
	MastersStudent()
	{
		majorSubject = nullptr;
		totalCradithour = 0;
		EarnCradithour = 0;
	}
	MastersStudent(char* MS, int TCH, int ECH, char* na, int ag, int stuid, char* DN, int ns, char sec):GraduateStudent( na,  ag,  stuid,  DN,  ns,  sec)
	{
		int size = (strlen(MS) + 1);
		name = new char[size];
		strcpy_s(majorSubject, size, MS);
		totalCradithour = TCH;
		EarnCradithour = ECH;
	}



	void setmajorSubject(char* MS)
	{
		if (MS != nullptr)
		{
			delete[] MS;
			int size = (strlen(MS) + 1);
			majorSubject = new char[size];
			strcpy_s(majorSubject, size, MS);

		}
		else
		{
			int size = (strlen(MS) + 1);
			majorSubject = new char[size];
			strcpy_s(majorSubject, size, MS);

		}

	}
	char* getmajorSubject()
	{
		char* MS = nullptr;
		int size = (strlen(majorSubject) + 1);
		MS = new char[size];
		strcpy_s(MS, size, majorSubject);
		return MS;
	}
	void dispaly()
	{
		GraduateStudent::dispaly();
		cout << "Major Subject = " << totalCradithour << "\n";
		cout << "Total Cradit Hours = " << noOFSubjects << "\n";
		cout << "Earn Cradit Hours  =  " << EarnCradithour << "\n";
	}
	~MastersStudent()
	{
		delete[] majorSubject;
		majorSubject = nullptr;
	}


};
class DoctoralStudent :protected GraduateStudent
{
private:
	char* majorSubject;
	int totalCradithour;
	int EarnCradithour;
public:
	DoctoralStudent()
	{
		majorSubject = nullptr;
		totalCradithour = 0;
		EarnCradithour = 0;
	}
	DoctoralStudent(char* MS, int TCH, int ECH, char* na, int ag, int stuid, char* DN, int ns, char sec) :GraduateStudent(na, ag, stuid, DN, ns, sec)
	{
		int size = (strlen(MS) + 1);
		name = new char[size];
		strcpy_s(majorSubject, size, MS);
		totalCradithour = TCH;
		EarnCradithour = ECH;
	}



	void setmajorSubject(char* MS)
	{
		if (MS != nullptr)
		{
			delete[] MS;
			int size = (strlen(MS) + 1);
			majorSubject = new char[size];
			strcpy_s(majorSubject, size, MS);

		}
		else
		{
			int size = (strlen(MS) + 1);
			majorSubject = new char[size];
			strcpy_s(majorSubject, size, MS);

		}

	}
	char* getmajorSubject()
	{
		char* MS = nullptr;
		int size = (strlen(majorSubject) + 1);
		MS = new char[size];
		strcpy_s(MS, size, majorSubject);
		return MS;
	}
	void dispaly()
	{
		GraduateStudent::dispaly();
		cout << "Major Subject = " << totalCradithour << "\n";
		cout << "Total Cradit Hours = " << noOFSubjects << "\n";
		cout << "Earn Cradit Hours  =  " << EarnCradithour << "\n";
	}
	~DoctoralStudent()
	{
		delete[] majorSubject;
		majorSubject = nullptr;
	}


};



int main() 
{
	char name[20] = { 'h','a','s','e','e','b' };
	char MS[20] = { 'c','o','m','p','u','t','e','r' };
	char DN[20] = { 'B','S','C','S' };
	char sec = 'B';
	 MastersStudent m(MS,60,40,name,18,134,DN, 8,sec);
	m.dispaly();
	return 0;
}




