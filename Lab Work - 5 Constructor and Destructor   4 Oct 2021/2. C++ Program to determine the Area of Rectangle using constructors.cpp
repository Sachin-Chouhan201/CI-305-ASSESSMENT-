//2. C++ Program to determine the Area of Rectangle using constructors

/*

###############################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively.
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.
  
############################################################################################################################################################### 
 
*/
  
//SOURCE CODE : :
/*  C++ Program to find Area of Rectangle using constructor  */

#include <iostream>
using namespace std;

class CRectArea
{
    private:
        int length;
        int breadth;
    public:
        CRectArea (int,int);

        int areaofrect ()
        {
            return (length * breadth);
        }
        int length1()
        {
            return length;
        }

        int breadth1()
        {
            return breadth;
        }
};


CRectArea::CRectArea(int x, int y)
{
    length = x;
    breadth = y;
}


int main ()
{
    CRectArea myrectangle (2,2);

    cout<<"The Length of Rectangle :: "<<myrectangle.length1()<<"\n";
    cout<<"\nThe Breadth of Rectangle :: "<<myrectangle.breadth1()<<"\n";
    cout << "\nThe area of rectangle is :: " << myrectangle.areaofrect()<< endl;
    return 0;
}
//OUTPUT : :
/*  C++ Program to find Area of Rectangle using constructor  */

/*

The Length of Rectangle :: 2

The Breadth of Rectangle :: 2

The area of rectangle is :: 4

Process returned 0
  
*/
