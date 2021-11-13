//4. C++ program to find how many times function called by objects

/*
#######################################################################################################################

What are Functions ?
Function is a block of statements that performs some operations. All C++ programs have at least one function – function called “main()”. This function is entry-point of your program.

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
\
#######################################################################################################################

SOURCE CODE : :
//  C++ program to Count number of times a function is called  

*/

#include<iostream>
using namespace std;
class square
{
   private:
        int n,r;
        float n1,r1;
        static int b;
        public:
                void input();
          void calc();
                void display();
                
};
int square::b=0;
 void square::input()
{
        cout<<"Enter an integer:";
        cin>>n;
        cout<<"Enter a float no.:";
        cin>>n1;
        b++;
        
}
 void square::calc()
{
        r=n*n;
        r1=n1*n1;
        b++;
}
void square::display()
{
        cout<<"Square of integer:"<<r;
        cout<<"\nSquare of float:"<<r1;
        cout<<"\nFunction is called "<<b<<" times by the objects";
}
        

int main()
{
        square s;
        s.input();
        s.calc();
        s.display();
}
/*
OUTPUT : : 
//  C++ program to Count number of times a function is called  

Enter an integer :: 6

Enter a float no. :: 2.5

Square of integer [ 6 ] = 36

Square of float [ 2.5 ] = 6.25

Function is called [ 2 ] times by the objects

Process returned 0
  
*/
