//11. C++ Program to Show an Example of Destructor

/*

###################################################################################################################################################3

Destructors in C++ : :
These are the type of member function which are automatically executed when an object of that class is destroyed is called a destructor.

The destructors has no return type and its name is same as class name, it cannot accept any parameters. The tilde sign(~) is written before the destructor name.

###################################################################################################################################################3

Syntax : :
The Syntax of declaring destructors are as follows:

~name()

{

Destructors body

}

~name: It shows the name of a destructor.

###################################################################################################################################################3

*/
//SOURCE CODE : :
/*  C++ Program to demonstrate the Concept of Destructor  */

#include<iostream>
using namespace std;

class test
{
    private:
        int a;
    public:
        test()
        {
            cout<<"Object is created............"<<endl<<endl;
        }
        ~test()
        {
            cout<<"Object is destroyed.........."<<endl<<endl;
        }
};

int main()
{
    test *p1= new test;
    test *p2= new test;

    delete p1;
    delete p2;

    return 0;
}

//OUTPUT : :
/*  C++ Program to demonstrate the Concept of Destructors  */
/*
Object is created............

Object is created............

Object is destroyed..........

Object is destroyed..........


Process returned 0
  
*/
