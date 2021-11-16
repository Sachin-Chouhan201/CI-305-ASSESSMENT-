//8. C++ Show Counter using Overloading unary operator ++
/*
#####################################################################################################################################################################

What is Overloading in C++ ?
C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator overloading
respectively.

#####################################################################################################################################################################

Function overloading : :
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the 
number of arguments in the argument list. You can not overload function declarations that differ only by return type.

#####################################################################################################################################################################

Operators overloading : :
You can redefine or overload most of the built-in operators available in C++. Thus a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names the keyword operator followed by the symbol for the operator being defined. Like any other function,
an overloaded operator has a return type and a parameter list.

#####################################################################################################################################################################

*/
  
//SOURCE CODE : :
/* C++ program for show Counter using Overloading unary operator ++  */

#include<iostream>
using namespace std;
class counter
{
int count;
public:
counter()
{
        count=0;
}
int get_count()
{
return count;
}
void operator++()
{
count++;
}
};
 
int main()
{
counter c1,c2;
cout<<"\nC1 ="<<c1.get_count();
cout<<"\nC2 ="<<c2.get_count();
 
c1++;           
c2++;
++c2;
cout<<"\nC1 ="<<c1.get_count();
cout<<"\nC2 ="<<c2.get_count();
return 0;
}
//OUTPUT : :
/* C++ program for show Counter using Overloading unary operator ++  */
/*
C1=0 C2=O

C1=1 C2=2
*/
