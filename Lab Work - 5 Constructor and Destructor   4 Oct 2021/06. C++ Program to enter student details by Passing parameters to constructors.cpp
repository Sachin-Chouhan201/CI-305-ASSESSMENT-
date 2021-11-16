//6. C++ Program to enter student details by Passing parameters to constructors
/*

#####################################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

#####################################################################################################################################################

*/
//SOURCE CODE : :
/*  C++ Program to enter student details using Class  */

#include<iostream>
using namespace std;

class Student
{
    private:
        int marks;
        char grade;
    public:
        Student(int m, char g)
        {
            marks= m;
            grade= g;
        }

        void show()
        {
            cout<<"\nMarks ="<<marks<<endl;
            cout<<"\nGrade = "<<grade<<endl;
        }
};

int main()
{
    Student s1(730, 'A'), s2(621,'B');
    cout<<"Record of student 1 :: -----------------"<<endl;
    s1.show();
    cout<<"\nRecord of student 2 :: -----------------"<<endl;
    s2.show();

    return 0;
}
//OUTPUT : :

/*  C++ Program to enter student details using Class  */
/*
Record of student 1 :: -----------------

Marks =730

Grade = A

Record of student 2 :: -----------------

Marks =621

Grade = B

Process returned 0
  
*/
