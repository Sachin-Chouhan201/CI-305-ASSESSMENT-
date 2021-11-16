//10. C++ Program to Perform Complex Operations using Overloading.
/*

########################################################################################################################################################
What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

########################################################################################################################################################

*/
  
//SOURCE CODE : :
/*  C++ Program to Perform Complex Operations using Overloading  */

#include <iostream>
using namespace std;

class Complex
{
     private:
        double a;
        double b;

    public:
        Complex(double=1.0,double=1.0); // Constructor;
        void set(double,double);
        void print();
        Complex operator+(Complex);
        Complex operator++();
        Complex operator++(int);

};

Complex::Complex(double r, double i)
{
   set(r,i);
}


void Complex::print()
{
    if (b<0)
    cout <<"\n"<< a << "" << b <<"i"<<endl;
    else
    cout <<"\n"<< a << "+" << b <<"i"<<endl;
}

void Complex::set(double r, double i)
{
    a = r;
    b = i;
}
// Prefix Exm.
Complex Complex::operator+(Complex R)
{
    Complex tmp;
    tmp.a = a + R.a;
    tmp.b = b + R.b;
    return tmp;
}
// Prefix Exm.
Complex Complex::operator++()
{
    a++;
    b++;
    return *this;
}

// Postfix Exm.
Complex Complex::operator++(int x)
{
    a++;
    b++;
    return *this;
}
int main()
{
    Complex A(3,4), B(5,-6);
    A.print();
    B.print();
    Complex C;
    C= A+B;
    C.print();
    ++A;
    cout <<endl;
    A.print();
    C = ++A;
    C.print();

    A++;
    A.print();
    //system("pause");
    return 0;
}
//OUTPUT : :
/*  C++ Program to Perform Complex Operations using Overloading  */
/*

3+4i

5-6i

8-2i


4+5i

5+6i

6+7i

Process returned 0

 */
