#include<iostream>
#include "task1.h"
int main()
{
    Base* ptr = new Base;
    ptr->testFunction();         // prints "Base class"
    delete ptr;
    ptr = new Derived;
    ptr->testFunction();         // prints "Base class" because the base class function is not virtual
    delete ptr;
    return 0;
    /*i understand that when function is not virtual compilier check the type of pointer
    and when the function is virtual compilier check the address in pointer*/
}
