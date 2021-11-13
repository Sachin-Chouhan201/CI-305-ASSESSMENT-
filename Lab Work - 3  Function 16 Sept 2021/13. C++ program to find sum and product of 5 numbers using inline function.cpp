//13. C++ program to find sum and product of 5 numbers using inline function

/*

#######################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. 
This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

#######################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

#######################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

#######################################################################################################################

SOURCE CODE : :
//  C++ Program to find Sum and Product using inline function  
*/

#include<iostream>
using namespace std;

inline int sum(int a,int b,int c,int d,int e)
{
        return(a+b+c+d+e);
}

inline int mul(int a,int b,int c,int d,int e)
{
        return(a*b*c*d*e);
}

int main()
{
        int a,b,c,d,e;
        cout<<"\nEnter 1st number :: ";
        cin>>a;
        cout<<"\nEnter 2nd number :: ";
        cin>>b;
        cout<<"\nEnter 3rd number :: ";
        cin>>c;
        cout<<"\nEnter 4th number :: ";
        cin>>d;
        cout<<"\nEnter 5th number :: ";
        cin>>e;

        cout<<"\nSum of 5 Numbers [ "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<" ] = "<<sum(a,b,c,d,e)<<"\n";
        cout<<"\nProduct of 5 Numbers [ "<<a<<"*"<<b<<"*"<<c<<"*"<<d<<"*"<<e<<" ] = "<<mul(a,b,c,d,e)<<"\n";

        return 0;
}

/*
OUTPUT : : 
//  C++ Program to find Sum and Product using inline function  

Enter 1st number :: 1

Enter 2nd number :: 2

Enter 3rd number :: 3

Enter 4th number :: 4

Enter 5th number :: 5

Sum of 5 Numbers [ 1+2+3+4+5 ] = 15

Product of 5 Numbers [ 1*2*3*4*5 ] = 120

Process returned 0
 
*/
