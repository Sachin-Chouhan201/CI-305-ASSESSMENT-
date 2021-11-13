//C++ Program for Addition, subtraction and multiplication using function

/* 
###########################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”.
This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

###########################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

###########################################################################################################################
*/
   
//SOURCE CODE : :
/*  C++ Program for Addition Subtraction Multiplication using function */

#include<iostream>
using namespace std;

int sum(int,int);
int sub(int,int);
int mul(int,int);

int res=0;

int main()
{
    int a,b,m,su,s;
    cout<<"\nEnter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;

    s=sum(a,b);
    su=sub(a,b);
    m=mul(a,b);

    cout<<"\nAddition of two Numbers [ "<<a<<" + "<<b<<" ] = "<<s<<"\n";
    cout<<"\nSubtraction of two Numbers [ "<<a<<" - "<<b<<" ] = "<<su<<"\n";
    cout<<"\nMultiplication of two Numbers [ "<<a<<" * "<<b<<" ] = "<<m<<"\n";

    return 0;
}

sum(int a,int b)
{
    res=a+b;
    return(res);
}

sub(int a,int b)
{
    res=a-b;
    return(res);
}

mul(int a,int b)
{
    res=a*b;
    return(res);
}

/*
OUTPUT : :
//  C++ Program for Addition Subtraction Multiplication using function 

Enter 1st number :: 7

Enter 2nd number :: 3

Addition of two Numbers [ 7 + 3 ] = 10

Subtraction of two Numbers [ 7 - 3 ] = 4

Multiplication of two Numbers [ 7 * 3 ] = 21

Process returned 0
 */
