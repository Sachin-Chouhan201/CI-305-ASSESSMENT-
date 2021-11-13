//7. C++ program to find greatest between two numbers using inline function

/*
##################################################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”.
This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

##################################################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}
##################################################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

##################################################################################################################################################
SOURCE CODE : :
// C++ Program to find Largest of two numbers using Inline function

*/

#include<iostream>
using namespace std;

inline int Largest(int a,int b)
{
        int r;
        r=(a>b)?a:b;
        return(r);
}

int main()
{
        int a,b;

        cout<<"\nEnter 1st number :: ";
        cin>>a;
        cout<<"\nEnter 2nd number :: ";
        cin>>b;

        cout<<"\nLargest of two numbers [ "<<a<<", "<<b<<" ] is :: "<<Largest(a,b)<<"\n";
}
/*
OUTPUT : : 
//  C++ Program to find Largest of two numbers using Inline function 

Enter 1st number :: 5

Enter 2nd number :: 3

Largest of two numbers [ 5, 3 ] is :: 5

Process returned 0
  */
