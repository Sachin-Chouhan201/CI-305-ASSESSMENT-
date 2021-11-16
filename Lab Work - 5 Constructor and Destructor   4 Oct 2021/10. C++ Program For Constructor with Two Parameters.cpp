//10. C++ Program For Constructor with Two Parameters

/*

##############################################################################################################################################

What are Constructors in C++?
A class constructor is a special member function of a class that is executed whenever we create new objects of that class.

The Compiler calls the Constructor whenever an object is created. Constructors iitialize values to object members after storage is allocated to the object.

##############################################################################################################################################

class A
{
int x;
public:
A(); //Constructor
};

While defining a contructor you must remeber that the name of constructor will be same as the name of the class, and contructors never have return type.

Constructors can be defined either inside the class definition or outside class definition using class name and scope resolution :: operator.

##############################################################################################################################################

*/
  
//SOURCE CODE : :
/* C++ Program for Constructor with Parameters(Parameterized Constructor)  */

#include <iostream>
using namespace std;
class MyClass
{
         int h;
         int i;
        public:
            MyClass(int j, int k)
       {
            h = j;
            i = k;
       }
           int getlnt()
       {
           return i;
       }
          int getHeight()
      {
          return h;
      }
};

int main()
{
     MyClass myObject[3] =
     {
         MyClass(7, 6),
         MyClass(1,9),
         MyClass(2,3)

     };

    int i;
    for(i=0; i<3; i++)
    {
        cout<<"\nObject [ "<<i+1<<" ] Heights :: ";
       cout << myObject[i].getHeight();
       cout << ", ";
       cout<< myObject[i].getlnt() << "\n";
    }
  return 0;
}

//OUTPUT : :
/* C++ Program for Constructor with Parameters(Parameterized Constructor)  */
/*
Object [ 1 ] Heights :: 7, 6

Object [ 2 ] Heights :: 1, 9

Object [ 3 ] Heights :: 2, 3

Process returned 0
*/
