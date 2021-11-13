//2. C++ program to find greatest between 3 numbers by defining the functions inside class

/*

########################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. 
This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

########################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

########################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

########################################################################################################################

SOURCE CODE : :
  C++ Program to find Largest of three Numbers using class

*/

#include<iostream>
using namespace std;

class largest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"\nEnter 1st number :: ";
                cin>>x;
                cout<<"\nEnter 2nd number :: ";
                cin>>y;
                cout<<"\nEnter 3rd number :: ";
                cin>>z;
        }

        void calc()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);

                cout<<"\nThe Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<"\n";
        }
};

int main()
{
        largest g;
        g.input();
        g.calc();

        return 0;
}

/*
OUTPUT : :
//  C++ Program to find Largest of three Numbers using class 
Enter 1st number :: 7

Enter 2nd number :: 2

Enter 3rd number :: 8

The Largest Number among [ 7, 2, 8 ] = 8

Process returned 0
  
  */
