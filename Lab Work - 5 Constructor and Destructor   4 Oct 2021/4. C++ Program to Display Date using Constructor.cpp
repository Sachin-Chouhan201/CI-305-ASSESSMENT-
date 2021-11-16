//4. C++ Program to Display Date using Constructor
/*
###############################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
  And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.
  
###############################################################################################################################
  
*/
//SOURCE CODE : :
/*  C++ Program to Display Date using Constructors */

#include<iostream>
using namespace std;

class date
{
    private:
        int dd, mm, yy;

    public:
        date()
        {
            dd=16;
            mm=11;
            yy=2021;
            cout<<"\nDate Object has been created..............\n";
        }

        void display()
        {
            cout<<"\nThe Entered Date is :: ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main ()
{
date date1;
date1.display ();

return 0;
}
//OUTPUT : :
/*  C++ Program to Display Date using Constructors */
/*

Date Object has been created..............

The Entered Date is :: 16-11-2021

Process returned 0
  
*/
