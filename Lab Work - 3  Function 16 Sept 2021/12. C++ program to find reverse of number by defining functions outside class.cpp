//12. C++ program to find reverse of number by defining functions outside class

/*

#############################################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. 
This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

#############################################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

#############################################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.

#############################################################################################################################################

SOURCE CODE : :
//  C++ program to find Reverse of a Number using class 
*/

#include<iostream>
using namespace std;

class rev
{
        private:
                        int n,n1,rn=0,d;
        public:
                void input();
                void calc();
                void display();
};

void rev::input()
{
        cout<<"\nEnter any positive no. :: ";
        cin>>n;
}

void rev::calc()
{
        n1=n;
        while(n>0)
        {
                d=n%10;
                rn=(rn*10)+d;
                n/=10;

        }
}

void rev::display()
{
                cout<<"\nReverse of [ "<<n1<<" ] is :: "<<rn<<"\n";
}

int main ()
{
        rev r;
        r.input();
        r.calc();
        r.display();

        return 0;

}

/*
OUTPUT : :
//  C++ program to find Reverse of a Number using class 

Enter any positive no. :: 12345

Reverse of [ 12345 ] is :: 54321

Process returned 0

*/
