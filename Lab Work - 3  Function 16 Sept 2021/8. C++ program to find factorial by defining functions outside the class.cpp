//8. C++ program to find factorial by defining functions outside the class
/*
#####################################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. This function is entry-point of your program.

A function declaration tells the compiler about a function’s name, return type, and parameters. A function definition provides the actual body of the function.

#####################################################################################################################################

Defining a Function : :
The general form of a C++ function definition is as follows:

return_type Function_Name( list of parameters )
{
//function’s body
}

#####################################################################################################################################

return_type : suggests what the function will return. It can be void, int, char, some pointer or even a class object.
Function_Name : is the name of the function, using the function name it is called.
Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list.
Function body : is he part where the code statements are written.
Below is the source code for C++ Program to find Factorial of a number using class which is successfully compiled and run on Windows System to produce desired output as shown below :

#####################################################################################################################################

SOURCE CODE : :
 C++ Program to find Factorial of a number using class 
 
 */

#include<iostream>
using namespace std;

class factorial
{
        private:
                        int n,n1,f=1;
        public:
                void input();
                void calc();
                void display();
};

void factorial::input()
{
        cout<<"\nEnter any number :: ";
        cin>>n;
}

void factorial::calc()
{
        n1=n;
        if(n==0||n==1)
        cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }

}

void factorial::display()
{
                cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}

int main ()
{
        factorial f;
        f.input();
        f.calc();
        f.display();

        return 0;
}
/*
OUTPUT : :
// C++ Program to find Factorial of a number using class

Enter any number :: 6

Factorial of [ 6 ] is :: 720

Process returned 0
*/
