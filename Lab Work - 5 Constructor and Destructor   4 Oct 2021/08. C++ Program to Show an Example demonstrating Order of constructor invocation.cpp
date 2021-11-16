//8. C++ Program to Show an Example demonstrating Order of constructor invocation

/*
####################################################################################################################################################################

What is Class and Objects in C++?
*The classes are the most important feature of C++ that leads to Object Oriented programming.
*Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
*The variables inside class definition are called as data members and the functions are called member functions.
*Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively.
And all objects of this class will share these characteristics and behavior.
*Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
*Each object has different data variables. Objects are initialized using special class functions called Constructors.

####################################################################################################################################################################

*/

//SOURCE CODE : :
/*  C++ Program to illustrate Order of Constructor Invocation  */

#include<iostream>
using namespace std;

class SUBJECT
{
        int days;
        int subjectno;
        public:
                SUBJECT(int d=123, int sn=101);
                void printsubject(void)
                {
                        cout<<"\nSubject No: "<<subjectno<<"\n";
                        cout<<"\nDays: "<<days<<"\n";
                }
};

SUBJECT::SUBJECT(int d, int sn)
{
        cout<<"\nConstructing SUBJECT......\n";
        days=d;
        subjectno=sn;
}

class STUDENT
{
        int rollno;
        float marks;
        public:
                STUDENT()
                {
                        cout<<"\nConstructing STUDENT..........\n";
                        rollno=0;
                        marks=0.0;
                }
                void getvalue(void)
                {
                        cout<<"\nEnter roll number :: ";
                        cin>>rollno;
                        cout<<"\nEnter marks :: ";
                        cin>>marks;
                }
                void print(void)
                {
                        cout<<"\nRoll No: "<<rollno<<"\n";
                        cout<<"\nMarks: "<<marks<<"\n";
                }
};

class ADMISSION
{
        SUBJECT sub;
        STUDENT stud;
        float fees;
        public:
                ADMISSION()
                {
                        cout<<"\nConstructing ADMISSION........\n";
                        fees=0.0;
                }
                void print(void)
                {
                        stud.print();
                        sub.printsubject();
                        cout<<"\nFees :: "<<fees<<"\n";
                }
};


int main()
{
        ADMISSION adm;
        adm.print();
        cout<<"\n\nBack to main()......\n";

        return 0;
}


//OUTPUT : :
/*  C++ Program to illustrate Order of Constructor Invocation  */
/*

Constructing SUBJECT......

Constructing STUDENT..........

Constructing ADMISSION........

Roll No: 0

Marks: 0

Subject No: 101

Days: 123

Fees :: 0


Back to main()......

Process returned 0


*/
