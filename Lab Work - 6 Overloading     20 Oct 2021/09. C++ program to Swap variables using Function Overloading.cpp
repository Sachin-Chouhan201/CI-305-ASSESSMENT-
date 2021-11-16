//9. C++ program to Swap variables using Function Overloading.
/*

###################################################################################################################################################

Function overloading : :
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types
and/or the number of arguments in the argument list. You can not overload function declarations that differ only by return type.

###################################################################################################################################################

Operators overloading : :
You can redefine or overload most of the built-in operators available in C++. Thus a programmer can use operators with user-defined types as well.

###################################################################################################################################################

Overloaded operators are functions with special names the keyword operator followed by the symbol for the operator being defined. Like any other function,
an overloaded operator has a return type and a parameter list.

###################################################################################################################################################

*/

//SOURCE CODE : :
/*  C++ program to Swap variables using Function Overloading */

#include<iostream>
using namespace std;
void swap(int &ix,int &iy);
void swap(float &fx,float &fy);
void swap(char &cx,char &cy);
int main()
{
                int ix,iy;
float fx,fy;
char cx,cy;

cout<<"Enter 2 integers:";
cin>>ix>>iy;
cout<<"Enter 2 floating point no:s:";
cin>>fx>>fy;
cout<<"Enter 2 characters:";
cin>>cx>>cy;
cout<<"\nIntegers:";
cout<<"\nix="<<ix<<"\niy="<<iy;
swap(ix,iy);
cout<<"\nAfter swapping";
cout<<"\nix="<<ix<<"\niy="<<iy;
cout<<"\nFloating point no:s";
cout<<"\nfx="<<fx<<"\nfy="<<fy;
swap(fx,fy);
cout<<"\nAfter swapping";
cout<<"\nfx="<<fx<<"\nfy="<<fy;
cout<<"\nCharacters";
cout<<"\ncx="<<cx<<"\ncy="<<cy;
swap(cx,cy);
cout<<"\nAfter swapping";
cout<<"\ncx="<<cx<<"\ncy="<<cy;
return 0;
}
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void swap(float &a, float &b)
                {
float temp;
temp=a;
a=b;
b=temp;
}
void swap(char &a, char &b)
{
char temp;
temp=a;
a=b;
b=temp;
}
//OUTPUT : :
/*  C++ program to Swap variables using Function Overloading */
/*
Enter 2 integers:300 800                                                                                                                                                                                                       
Enter 2 floating point no:s:2.3 4.5                                                                                                                                                                                            
Enter 2 characters:d q                                                                                                                                                                                                         
                                                                                                                                                                                                                               
Integers:                                                                                                                                                                                                                      
ix=300                                                                                                                                                                                                                         
iy=800                                                                                                                                                                                                                         
After swapping                                                                                                                                                                                                                 
ix=800                                                                                                                                                                                                                         
iy=300                                                                                                                                                                                                                         
Floating point no:s                                                                                                                                                                                                            
fx=2.3                                                                                                                                                                                                                         
fy=4.5                                                                                                                                                                                                                         
After swapping                                                                                                                                                                                                                 
fx=4.5                                                                                                                                                                                                                         
fy=2.3                                                                                                                                                                                                                         
Characters                                                                                                                                                                                                                     
cx=d                                                                                                                                                                                                                           
cy=q                                                                                                                                                                                                                           
After swapping                                                                                                                                                                                                                 
cx=q                                                                                                                                                                                                                           
cy=d
*/
