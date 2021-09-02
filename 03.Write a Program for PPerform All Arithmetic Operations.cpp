/* “Write a Program for Perform All Arithmetic Operations  (‘+’,’-“,’*’,’/’,’ %’)” */

#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"Enter Two Numbers : \n";
 cin>>a>>b;
 cout<<"\nSum : = "<<a+b;
 cout<<"\nSubtraction : = "<<a-b<<endl;
 cout<<"\nMultiplication : = "<<a*b;
 if(b==0)
    cout<<"\nDivision Not Possible Due to Zero Error!!!";
 else
    cout<<"\nDivision : = "<<(float)a/b<<endl;
 cout<<"\nRemendier : = "<<a%b<<endl;
 return 0;
}

/* 
Output :-

Enter Two Numbers : 

Sum : = 5
Subtraction : = -1

Multiplication : = 6
Division : = 0.666667

Remendier : = 2


*/
