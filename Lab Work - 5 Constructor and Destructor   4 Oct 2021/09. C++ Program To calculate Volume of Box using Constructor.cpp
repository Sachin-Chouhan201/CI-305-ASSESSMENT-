//9. C++ Program To calculate Volume of Box using Constructor

/*

####################################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively.
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

####################################################################################################################################################################

*/

//SOURCE CODE : :
/*  C++ Program To calculate Volume of Box using Constructor */

#include <iostream>
using namespace std;

class box
{
    double length,width,height;
    double volume;

    public:
        box(double a,double b,double c);
        void vol();
};

box::box(double a,double b,double c)
{
    length=a;
    width=b;
    height=c;
    volume=length*width*height;
}

void box::vol()
{
    cout<<"\nDimensions of Box are :: \n";
    cout<<"\nLength of Box :: "<<length<<"\n";
    cout<<"\nWidth of Box :: "<<width<<"\n";
    cout<<"\nHeight of Box :: "<<height<<"\n";
    cout<<"\nVolume of Box :: "<<volume<<"\n";
}


int main()
{
    box x(2.4,5.7,2.1),y(3.3,4.4,5.5);

    x.vol();
    y.vol();

    return 0;
}
//OUTPUT : :
/*  C++ Program To calculate Volume of Box using Constructor */
/*

Dimensions of Box are ::

Length of Box :: 2.4

Width of Box :: 5.7

Height of Box :: 2.1

Volume of Box :: 28.728

Dimensions of Box are ::

Length of Box :: 3.3

Width of Box :: 4.4

Height of Box :: 5.5

Volume of Box :: 79.86

Process returned 0

*/
