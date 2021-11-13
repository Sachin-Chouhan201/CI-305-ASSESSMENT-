//11. C++ Program To Calculate Simple Interest using class

/*

#############################################################################################################################################

What is Class and Objects in C++?
*The classes are the most important feature of C++ that leads to Object Oriented programming.
*Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
*The variables inside class definition are called as data members and the functions are called member functions.
*Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
And all objects of this class will share these characteristics and behavior.
*Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
*Each object has different data variables. Objects are initialized using special class functions called Constructors.

#############################################################################################################################################

SOURCE CODE : :
//  C++ Program To Calculate Simple Interest using class  
*/

#include<iostream>
using namespace std;

class bank
{
 private:
     float p;
     float r;
     float t;
     float si;
     float amount;

 public:
    void read ( )
          {
                 cout <<" Enter Principle Amount :: ";
                 cin>>p ;
                 cout<<"\n Enter Rate of Interest :: ";
                 cin>>r;
                 cout <<"\n Enter Number of years :: ";
                 cin>>t;

                 si= (p *r*t) /100;
                 amount = si + p;

          }

    void show( )
         {
                cout<<"\n Entered Details are :: \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n\n Rate of Interest: "<<r;
                cout <<"\n\n Number of years: "<<t;
                cout <<"\n\n Interest : "<<si;
                cout <<"\n\n Total Amount : "<<amount<<"\n";
         }
};


int main ()
{
    bank b ;

    b.read ( );
    b.show ( );

    return 0;
}

//OUTPUT : :
/*  C++ Program To Calculate Simple Interest using class  */
/*
 Enter Principle Amount :: 385000

 Enter Rate of Interest :: 13.89

 Enter Number of years :: 4

 Entered Details are ::

 Principle Amount: 385000

 Rate of Interest: 13.89

 Number of years: 4

 Interest : 213906

 Total Amount : 598906

Process returned 0
   
*/
