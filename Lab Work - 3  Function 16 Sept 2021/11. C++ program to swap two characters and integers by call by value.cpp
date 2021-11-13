//11. C++ program to swap two characters and integers by call by value
/*

##############################################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

##############################################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

##############################################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.
  
##############################################################################################################################################
  
SOURCE CODE : :
//  C++ Program to Swap two numbers and characters using call by value

*/

#include<iostream>
using namespace std;

void swap(int,int);
void swapc(char,char);

int main()
{
        char x,y;
        int a,b;
        cout<<"\nEnter 1st character :: ";
        cin>>x;
        cout<<"\nEnter 2nd character :: ";
        cin>>y;
        cout<<"\nEnter 1st integer :: ";
        cin>>a;
        cout<<"\nEnter 2nd integer :: ";
        cin>>b;

        cout<<"\nBefore Swapping, Value of Characters :: \n\tx = "<<x<<"\ty = "<<y<<"\n";
        cout<<"\nBefore Swapping, Value of Integers :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

    swap(a,b);
    swapc(x,y);

    cout<<"\nOutside Function After Swapping, Value of Characters :: \n\tx = "<<x<<"\ty = "<<y<<"\n";
        cout<<"\nOutside Function After Swapping, Value of Integers :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

}
void swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nInside Function After Swapping, Value of Integers :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

}
void swapc(char x,char y)
{
        char z;
        z=x;
        x=y;
        y=z;
        cout<<"\nInside Function After Swapping, Value of Characters :: \n\tx = "<<x<<"\ty = "<<y<<"\n";
}
/*
OUTPUT : :
//  C++ Program to Swap two numbers and characters using call by value  

Enter 1st character :: C

Enter 2nd character :: D

Enter 1st integer :: 1

Enter 2nd integer :: 2

Before Swapping, Value of Characters ::
        x = C   y = D

Before Swapping, Value of Integers ::
        A = 1   B = 2

Inside Function After Swapping, Value of Integers ::
        A = 2   B = 1

Inside Function After Swapping, Value of Characters ::
        x = D   y = C

Outside Function After Swapping, Value of Characters ::
        x = C   y = D

Outside Function After Swapping, Value of Integers ::
        A = 1   B = 2

Process returned 0
*/
