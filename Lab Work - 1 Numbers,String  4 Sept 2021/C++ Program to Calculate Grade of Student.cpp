/*
Here you will learn and get code on finding the grade of a student based on marks obtained in C++. There are 2 programs, you'll go through:

Find Grade of Student based on Marks obtained in 5 Subjects
Find Grade of Student based on Marks obtained in all Subjects using user-defined Function. Here user is allowed to enter number of subject
The grade must be calculated based on following pattern:

Average Mark Range	Grade
91-100	A1
81-90	A2
71-80	B1
61-70	B2
51-60	C1
41-50	C2
33-40	D
21-32	E1
0-20	E2
Calculate Grade of Student in C++
To calculate grade of a student on the basis of total marks in C++ programming, you have to ask from user to enter marks obtained in 5 subjects. 
Now add marks of all the 5 subjects and divide it by 5 to get average mark. And based on this average mark, find grade as per the table given above:
*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, avg;
    cout<<"Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/5;
    cout<<"\nGrade = ";
    if(avg>=91 && avg<=100)
        cout<<"A1";
    else if(avg>=81 && avg<91)
        cout<<"A2";
    else if(avg>=71 && avg<81)
        cout<<"B1";
    else if(avg>=61 && avg<71)
        cout<<"B2";
    else if(avg>=51 && avg<61)
        cout<<"C1";
    else if(avg>=41 && avg<51)
        cout<<"C2";
    else if(avg>=33 && avg<41)
        cout<<"D";
    else if(avg>=21 && avg<33)
        cout<<"E1";
    else if(avg>=0 && avg<21)
        cout<<"E2";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}
