//5. C++ program to Display Student Details using constructor
/*

##############################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

##############################################################################################################################################################

*/
//SOURCE CODE : :
/*  C++ program to Display Student Details using constructor and destructor */

#include<iostream>
using namespace std;

class stu
{
                private:
                    char name[20],add[20];
                        int roll,zip;

                public:
                    stu ();//Constructor
                        ~stu();//Destructor
                        void read();
                        void disp();
};

stu :: stu()
{
        cout<<"\nThis is Student Details constructor called..........."<<endl;
}

void stu :: read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
        cout<<"\nEnter the student address :: ";
        cin>>add;
        cout<<"\nEnter the Zipcode :: ";
        cin>>zip;
}

void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
        cout<<"\nAddress is :: "<<add<<endl;
        cout<<"\nZipcode is :: "<<zip;
}

stu :: ~stu()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}


int main()
{
        stu s;
    s.read ();
    s.disp ();

    return 0;
}
//OUTPUT : :
/*  C++ program to Display Student Details using constructor and destructor */
/*
This is Student Details constructor called...........

Enter the student Name :: CodezClub

Enter the student roll no :: 123

Enter the student address :: India

Enter the Zipcode :: 100215

The Entered Student Details are shown below ::----------

Student Name :: CodezClub

Roll no   is :: 123

Address is :: India

Zipcode is :: 100215

Student Detail is Closed.............

Process returned 0
  
  */
