//15. C++ Program to Swap two numbers by call by reference

/*

############################################################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. 
This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

############################################################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

############################################################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

############################################################################################################################################################

SOURCE CODE : :
//  C++ Program to Swap two numbers using call by reference 
*/

#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;
        
        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
        
        swap(a,b);
        
        cout<<"\nOutside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}

void swap(int &a,int &b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nInside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}

/*
OUTPUT : :
// C++ Program to Swap two numbers using call by reference  

Enter Value Of A :: 5

Enter Value of B :: 7

Before Swapping, Value of ::
        A = 5   B = 7

Inside Function After Swapping, Value of ::
        A = 7   B = 5

Outside Function After Swapping, Value of ::
        A = 7   B = 5

Process returned 0

*/
