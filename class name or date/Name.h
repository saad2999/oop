#include<iostream>
using namespace std;
class Name
{
private:

    char* firstName;

    char* lastName;
public:
    Name(char* first, char* last);
    Name(const Name&);
   void copyName(Name&);
   void camelCase(); 
   void toLower();
   void toUpper();
   int nameLength();
   void swapNames();
   char* fullName();
   bool isValidName();
   void display();
   Name& operator =(Name& obj);
};

