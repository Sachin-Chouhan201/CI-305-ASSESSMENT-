//12. C++ Program to show Constructor & Destructor Example
/*

#############################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively.
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

#############################################################################################################################################################

*/
//SOURCE CODE : :
/* C++ Program to show Constructor and Destructor Example  */

#include<iostream>
using namespace std;

class CAdd
{

    public:
                int one;

                CAdd(int two)
                {
                        cout << "\nA constructor is called." << endl;
                        one=two;
                }

                CAdd()
                {
                        cout << "\nA default constructor is called " << endl;
                }

                ~CAdd()
                {
                        cout << "\nDestructing " << one << endl;
                }

                int add()
                {
                        return(one+one);
                }
};

int main()
{
                CAdd myobj1(4);
                CAdd myobj2;

                cout <<"\nThe value in Object1 is :: "<< myobj1.one << endl;
                cout << "\nEnter a number :: " ;

                cin >> myobj2.one;
                cout << myobj2.add()<<endl;

                return(0);
}
//OUTPUT : :
/* C++ Program to show Constructor and Destructor Example  */
/*
A constructor is called.

A default constructor is called

The value in Object1 is :: 4

Enter a number :: 8
16

Destructing 8

Destructing 4

Process returned 0
  
*/
