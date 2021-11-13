//6. C++ Program to find cube of number using function

/*
##############################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

##############################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

##############################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

##############################################################################################################################

SOURCE CODE : :
//  C++ Program to find Cube of a Number using function 
*/
  
#include<iostream>
using namespace std;

int main()
{
    float cube(float);
                                   //function prototype
    float a,cu;
    cout<<"\nEnter any number :: ";
    cin>>a;

    cu=cube(a);                                         //function calling

    cout<<"\nThe Cube of Number [ "<<a<<" ] is :: "<<cu<<"\n";

    return 0;
}

float cube(float a)
{
    float cu;
    cu=a*a*a;
    return(cu);
}
/*
OUTPUT : :
//  C++ Program to find Cube of a Number using function 

Enter any number :: 4

The Cube of Number [ 4 ] is :: 64

Process returned 0
  
  */
