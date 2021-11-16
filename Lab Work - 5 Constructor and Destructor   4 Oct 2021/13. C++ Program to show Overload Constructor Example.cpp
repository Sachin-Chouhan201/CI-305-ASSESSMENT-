//13. C++ Program to show Overload Constructor Example
/*

###################################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
  And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.
  
###################################################################################################################################################################
  
//SOURCE CODE : :
/*  C++ Program to Show Overload Constructor Example  */

#include<iostream>
using namespace std;

class test
{
    private:
        int a;
        char b;
        double c;
    public:
        test(int q)
        {
            a=q;
            b= '0';
            c=0;
        }

        test(char q)
        {
            a=0;
            b= q;
            c=0;
        }

        test(double q)
        {
            a=0;
            b='0';
            c=q;
        }

        test(int q1, char q2, double q3)
        {
            a=q1;
            b=q2;
            c=q3;
        }

        void show()
        {
            cout<<"\nValue of a: "<<a<<endl;
            cout<<"\nValue of b: "<<b<<endl;
            cout<<"\nValue of c: "<<c<<endl<<endl;
        }
};


int main()
{
    test q1(5);
    test q2('t');
    test q3(3.14);
    test q4(4, 'y', 3.45);
    q1.show();
    q2.show();
    q3.show();
    q4.show();

    return 0;
}
//OUTPUT : :
/*  C++ Program to Show Overload Constructor Example  */
/*

Value of a: 5

Value of b: 0

Value of c: 0


Value of a: 0

Value of b: t

Value of c: 0


Value of a: 0

Value of b: 0

Value of c: 3.14


Value of a: 4

Value of b: y

Value of c: 3.45


Process returned 0

*/
