//10. C++ Program to Perform Complex Operations using Overloading

/*

########################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

########################################################################################################################################################

What is Overloading in C++ ?
C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator 
overloading respectively.

########################################################################################################################################################

Function overloading : :
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the 
number of arguments in the argument list. You can not overload function declarations that differ only by return type.

########################################################################################################################################################

Operators overloading : :
You can redefine or overload most of the built-in operators available in C++. Thus a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names the keyword operator followed by the symbol for the operator being defined. Like any other function, 
an overloaded operator has a return type and a parameter list.

########################################################################################################################################################
*/
//SOURCE CODE : :
/*  C++ Program for Complex Operations using Operator Overloading */

#include<iostream>
#include<stdio.h>
using namespace std;
class complex
{
        int real;
        float image;
        public:
        void getdata()
        {
                cout<<"\n enter the real part of the complex :: ";
                cin>>real;
                cout<<"\n enter the imaginary part of the complex :: ";
                cin>>image;
        }
        void operator + (complex);
        void operator - (complex);
};

void complex :: operator +  (complex c1)
{
        complex temp;
        temp.real=real+c1.real;
        temp.image=image+c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after addition :: ";
                cout<<temp.real<<temp.image<<"i\n";
        }
}
void complex ::operator-(complex c1)
{
        complex temp;
        temp.real = real-c1.image;
        temp.image= image-c1.image;
        if (temp.image>=0)
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<"\n temp.real"<<"+"<<temp.image<<"i\n";
        }
        else
        {
                cout<<"\n complex no. after subtraction :: ";
                cout<<temp.real<<temp.image<<"i\n";
    }
}
int main()
{

        complex c1, c2;
        int n;
        do
        {
                cout<<"\n 1. Input data for complex no. ";
                cout<<"\n 2. Addition of complex no. ";
                cout<<"\n 3. Subtraction of complex no. ";
                cout<<"\n 4. Quit";
                cout<<"\n Enter your choice :: ";
                cin>>n;
                switch(n)

                {
                         case 1:
                         cout<<endl<<"\n Enter the data for First Complex No......";
                         c1.getdata();
                         cout<<endl<<"\n Enter the data for seconds Complex No.....";
                         c2.getdata();

                         break;

                         case 2:
                         c1+c2;

                         break;

                         case 3:
                         c1-c2;

                         break;

                         case 4:
                         exit(1);
                         break;
                        }
                } while (n!=4);
     return 0;
}


//OUTPUT : :
/*  C++ Program for Complex Operations using Operator Overloading */
/*
 1. Input data for complex no.
 2. Addition of complex no.
 3. Subtraction of complex no.
 4. Quit
 Enter your choice :: 1


 Enter the data for First Complex No......
 enter the real part of the complex :: 2

 enter the imaginary part of the complex :: 3


 Enter the data for seconds Complex No.....
 enter the real part of the complex :: 4

 enter the imaginary part of the complex :: 5

 1. Input data for complex no.
 2. Addition of complex no.
 3. Subtraction of complex no.
 4. Quit
 Enter your choice :: 2

 complex no. after addition :: 6+8i

 1. Input data for complex no.
 2. Addition of complex no.
 3. Subtraction of complex no.
 4. Quit
 Enter your choice :: 3

 complex no. after subtraction :: -3-2i

 1. Input data for complex no.
 2. Addition of complex no.
 3. Subtraction of complex no.
 4. Quit
 Enter your choice :: 4

Process returned 1
   
*/
