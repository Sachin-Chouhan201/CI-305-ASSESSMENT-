//1. C++ Program to calculate Volume of Cube using constructor 

/*

###########################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
  And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

###########################################################################################################################################################

*/

//SOURCE CODE : :

/*  C++ Program to calculate Volume of Cube using constructor  */

#include<iostream>

using namespace std;



class cube

{

            public:

                        double side;

                        double volume()

                        {

                            return(side*side*side);

                        }

                        cube(double side1)

                        {

                            cout << "\nA constructor is called" << endl;

                            side=side1;

                        }

                        cube()

                        {

                            cout << "\nA default constructor is called " << endl;

                        }

                        ~cube()

                        {

                            cout << "\nDestructing " << side << endl;

                        }

};



int main()

{

            cube c1(2.34);

            cube c2;

            cout << "\nThe side of the cube is: " << c1.side << endl;

            cout << "\nThe volume of the first cube is : " << c1.volume() << endl;

            cout << "\nEnter the length of the second cube : " ;

            cin >> c2.side;

            cout << "\nThe volume of second cube is : " << c2.volume() << endl;

            return(0);

}

/*

//OUTPUT : :
/*  C++ Program to calculate Volume of Cube using constructor  */
/*

A constructor is called

A default constructor is called

The side of the cube is: 2.34

The volume of the first cube is : 12.8129

Enter the length of the second cube : 4

The volume of second cube is : 64

Destructing 4

Destructing 2.34

Process returned 0
  
*/
