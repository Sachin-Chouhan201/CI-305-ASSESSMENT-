//13. C++ program to multiply every member by 10 using class

/*

#############################################################################################################################################

What is Class and Objects in C++?
The classes are the most important feature of C++ that leads to Object Oriented programming.
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
  And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

#############################################################################################################################################
  
*/

//SOURCE CODE : :

/* C++ Program to Multiply every member by k using class  */

#include<iostream>
using namespace std;

class array
{
     public:
         int n;
         void readarray();
         void multiply();
};

void array::readarray()
{
        int a[100];
        cout<<"Enter No. of elements u want :: ";
        cin>>n;
        for(int i=0;i<n;i++)
    {
        cout<<"\nEnter [ "<<i+1<<" ] element :: ";
        cin>>a[i];
    }

}

void array::multiply()
{
        int i,j,a[100],temp[100],k;

        cout<<"\nEnter the no. which u want to multiply :: ";
        cin>>k;

        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                temp[i]=(a[i]*k);
        }
        cout<<"\nAfter Multiply every member by k = [ "<<k<<" ], Resultant array is :: "<<endl;
        for(int i=0;i<n;i++)
    {
        cout<<"\n [ "<<i+1<<" ] element :: "<<temp[i]<<"\n";
    }

}

int main()
{
        array mul;

        mul.readarray();
        mul.multiply();

        return 0;
}

//OUTPUT : :
/* C++ Program to Multiply every member by k using class  */
/*
Enter No. of elements u want :: 6

Enter [ 1 ] element :: 1

Enter [ 2 ] element :: 2

Enter [ 3 ] element :: 3

Enter [ 4 ] element :: 4

Enter [ 5 ] element :: 5

Enter [ 6 ] element :: 6

Enter the no. which u want to multiply :: 5

After Multiply every member by k = [ 5 ], Resultant array is ::

 [ 1 ] element :: 5

 [ 2 ] element :: 10

 [ 3 ] element :: 15

 [ 4 ] element :: 20

 [ 5 ] element :: 25

 [ 6 ] element :: 30

Process returned 0
   
*/
