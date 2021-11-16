//5. C++ Program for Complex Operations using Operator Overloading. 
/*

#######################################################################################################################################################################

What is Overloading in C++ ?
C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator 
overloading respectively.

Function overloading : :
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types 
and/or the number of arguments in the argument list. You can not overload function declarations that differ only by return type.

Operators overloading : :
You can redefine or overload most of the built-in operators available in C++. Thus a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names the keyword operator followed by the symbol for the operator being defined. Like any other function,
an overloaded operator has a return type and a parameter list.

#######################################################################################################################################################################
*/
//SOURCE CODE : :
/* C++ Program for Complex Operations using Operator Overloading  */

#include<iostream>
#include<string>
using namespace std;
struct complex
{
float real;
float imag;
};
complex operator + (complex a,complex b);
complex operator - (complex a,complex b);
complex operator * (complex a,complex b);
complex operator / (complex a,complex b);

int main()
{
complex a,b,c;
int ch;
void menu(void);
cout<<"\nEnter the first complex no :: ";
cin>>a.real>>a.imag;
cout<<"\nEnter the second complex no :: ";
cin>>b.real>>b.imag;
menu();
while ((ch = getchar()) != 'q')
{
switch(ch)
{
case 'a':c =a + b;
cout<<"\nAddition of 2 no’s :: ";
cout<<c.real<<"+i"<<c.imag;
break;
case 's':c=a-b;
cout<<"\nSubstraction of 2 no’s :: ";
cout<<c.real<<"i"<<c.imag;
break;
case 'm':c=a*b;
cout<<"\nMultiplication of 2 no’s :: ";
cout<<c.real<<"i"<<c.imag;
break;
                                case 'd':c=a/b;
cout<<"\nDivision of 2 no’s :: ";
cout<<c.real<<"i"<<c.imag;
break;
                        }
                }
        }
void menu()
{
cout<<"\ncomplex no: operators";
cout<<"\na->addition";
cout<<"\ns->substraction";
cout<<"\nm->multiplication";
cout<<"\nd->division";
cout<<"\nq->quit";
cout<<"\n\noptions please :: ";
}
complex operator -(struct complex a, struct complex b)
{
complex c;
c.real=a.real-b.real;
c.imag=a.imag-b.imag;
return(c);
}
complex operator *(struct complex a, struct complex b)
{
complex c;
c.real=((a.real*b.real)-(a.imag*b.imag));
c.imag=((a.real*b.imag)+(a.imag*b.real));
return(c);
}
complex operator +(struct complex a,struct complex b)
{
complex c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return(c);
}
complex operator /(struct complex a, struct complex b)
{
complex c;
float temp;
temp=((b.real*b.real)+(b.imag*b.imag));
c.real=((a.real*b.real)+(a.imag*b.imag))/temp;
                 return(c);
}
//OUTPUT : :
/* C++ Program for Complex Operations using Operator Overloading  */
/*
Enter the first complex no :: 2 3

Enter the second complex no :: 4 5

complex no: operators
a->addition
s->substraction
m->multiplication
d->division
q->quit

options please :: a

Addition of 2 noÆs :: 6+i8
*/
s

Substraction of 2 noÆs :: -2i-2
m

Multiplication of 2 noÆs :: -7i22
d

Division of 2 noÆs :: 0.560976i0
q

Process returned 0

