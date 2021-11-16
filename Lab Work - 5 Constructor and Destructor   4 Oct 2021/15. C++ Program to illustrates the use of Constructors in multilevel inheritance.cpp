//15. C++ Program to illustrates the use of Constructors in multilevel inheritance
/*

#########################################################################################################################################################

What are Constructors in C++?
A class constructor is a special member function of a class that is executed whenever we create new objects of that class.

The Compiler calls the Constructor whenever an object is created. Constructors iitialize values to object members after storage is allocated to the object.

#########################################################################################################################################################

class A
{
int x;
public:
A(); //Constructor
};

While defining a contructor you must remeber that the name of constructor will be same as the name of the class, and contructors never have return type.

Constructors can be defined either inside the class definition or outside class definition using class name and scope resolution :: operator.

#########################################################################################################################################################

*/
//SOURCE CODE : :
/* C++ Program to illustrates the use of Constructors in multilevel inheritance  */

#include<iostream>
using namespace std;

class A
{
        protected:
                int x ;
        public:
                A( )  // Constructor without argument
                {
                     x = 0 ;
                     cout << "\n Constructor of class A without any argument is invoked" ;
                }
                A(int X) // Constructor with one argument
                {
                      x = X ;
                      cout << "\n Constructor of class A with one argument is invoked" ;
                }
                void Enter_x(void)
                {  cout << "\n\t Enter the value of x: " ; cin >> x ; }
                void Display_x(void)
                { cout << "\n\t x = " << x ; }
};

class B : public A
{
        protected:
                int y ;
        public:
                B( ) : A( )  // Constructor without argument
                {
                        y = 0;
                        cout << "\n Constructor of class B without any argument is invoked" ;
                }
                  // Constructor with two arguments
                B( int X,  // Argument for constructor A
                         int Y )   // Argument for constructor B
                                 : A(X)   // Call for constructor A
                {
                        y = Y;
                        cout << "\n Constructor of class B with two arguments in invoked" ;
                }
                void Enter_y(void)
                { cout << "\t Enter the value of y: " ; cin >> y ;  }
                void Display_y(void)
                { cout << "\n\t y = " << y ;  }
};

class C : public B
{
        private:
                int z ;
        public:
                C( ) : B( )   // Constructor without argument
                {
                       z = 0;
                       cout << "\n Constructor of class C without any argument is invoked\n" ;
                }
                // Constructor with three arguments
                C(int X, int Y,   // Arguments for constructor B
                                int Z)     // Argument for constructor C
                                              : B(X, Y)    // Call for constructor B
                {
                       z = Z ;
                       cout << "\n Constructor of class C with three arguments is invoked" ;
                }
                void Enter_z(void)
                { cout << "\t Enter the value of z: " ; cin >> z ; }
                void Display_z(void)
                { cout << "\n\t z = " << z ; }
};


int main()
{
                cout << "\n The first object is in use now******** \n " ;
                C c1 ;
                c1.Enter_x( );
                c1.Enter_y( );
                c1.Enter_z( );
                c1.Display_x( );
                c1.Display_y( );
                c1.Display_z( );
                cout << "\n\n The second object is in use now******** \n" ;
                C c2(5, 6, 7) ;
                c2.Display_x( );
                c2.Display_y( );
                c2.Display_z( );
return 0;
}
//OUTPUT : :
/* C++ Program to illustrates the use of Constructors in multilevel inheritance  */
/*
 The first object is in use now********

 Constructor of class A without any argument is invoked
 Constructor of class B without any argument is invoked
 Constructor of class C without any argument is invoked

         Enter the value of x: 2
         Enter the value of y: 3
         Enter the value of z: 4

         x = 2
         y = 3
         z = 4

 The second object is in use now********

 Constructor of class A with one argument is invoked
 Constructor of class B with two arguments in invoked
 Constructor of class C with three arguments is invoked
         x = 5
         y = 6
         z = 7

Process returned 0
   
*/
