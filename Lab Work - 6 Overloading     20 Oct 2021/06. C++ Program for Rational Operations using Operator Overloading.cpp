//6. C++ Program for Rational Operations using Operator Overloading. 

/*

#################################################################################################################################

What is Overloading in C++ ?
C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function
overloading and operator overloading respectively.

#################################################################################################################################

Function overloading : :
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from
each other by the types and/or the number of arguments in the argument list. You can not overload function declarations that differ only by return type.

#################################################################################################################################

Operators overloading : :
You can redefine or overload most of the built-in operators available in C++. Thus a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names the keyword operator followed by the symbol for the operator being defined.
Like any other function, an overloaded operator has a return type and a parameter list.

#################################################################################################################################

*/

//SOURCE CODE : :
/*  C++ Program for Rational Operations using Operator Overloading  */

#include<stdio.h>
 #include<iostream>
 using namespace std;
 class rational
 {
         int numer;
         int denom;
         public:
         void getdata()
         {
                 cout<<"\n enter the numerator part of the rational no. :: ";
                 cin>>numer;
                 cout<<"\n enter the denominator part of the rational no. :: ";
                 cin>>denom;
         }
         void operator+(rational);
         void operator-(rational);
         void operator *(rational);
         void operator /(rational);
 };
 void rational ::operator+(rational c1)
 {
         rational temp;
         temp.numer=(numer*c1.denom)+(c1.numer*denom);
         temp.denom=denom*c1.denom;
         cout<<"\nrational no. after addition :: ";
         cout<<"\n numerator = "<<temp.numer<<"\n denominator = "<<temp.denom;
 }
 void rational ::operator -(rational c1)
 {
         rational temp;
         temp.numer=(numer*c1.denom)-(c1.numer*denom);
         temp.denom=denom*c1.denom;
         cout<<"\n rational no. after subtraction :: ";
         cout<<"\n numerator = " <<temp.numer<<"\n denominator = "<<temp.denom;
 }
 void rational ::operator *(rational c1)
 {
         rational temp;
         temp.numer=numer*c1.numer;
         temp.denom=denom*c1.denom;
         cout<<"\n rational no. after multiplication :: ";
         cout <<"\n numerator = "<<temp.numer<<"\n denominator = "<< temp.denom;
 }
 void rational :: operator /(rational c1)
 {
         rational temp;
         temp.numer= numer*c1.denom;
         temp.denom=c1.numer*denom;
         cout<<"\n rational no. after dividation :: ";
         cout <<"\n numerator = "<<temp.numer<<"\n denominator = "<<temp.denom;
 }
 int main()
 {

         rational c1, c2;
         int n;
         do
         {
                 cout<<"\n\n 1.Input data for rational no. ";
                 cout<<"\n 2. Addition of rational no. ";
                 cout<<"\n 3. Subtraction of rational no. ";
                 cout<<"\n 4. Multiplication of rational no.";
                 cout<<"\n 5. Division of rational no. ";
                 cout<<"\n 6. Quit";
                 cout<<"\n\n Enter your choice :: ";
                 cin>>n;
                 switch(n)
                 {
                         case 1:
                         cout<<endl<<"\n enter the data for first rational no.:: ";
                         c1.getdata();
                         cout<<endl<<"\n enter the data for second rational no. :: ";
                         c2.getdata ();
                         break;

                         case 2:
                         c1+c2;
                         break;

                         case 3:
                         c1-c2;
                         break;

                         case 4:
                         c1*c2;
                         break;

                         case 5:
                         c1/c2;
                         break;

                         case 6:
                         exit(1);
                         break;
                 }
         } while (n!=6);
         return 0;
 }
//OUTPUT : :
/*  C++ Program for Rational Operations using Operator Overloading  */
/*

 1.Input data for rational no.
 2. Addition of rational no.
 3. Subtraction of rational no.
 4. Multiplication of rational no.
 5. Division of rational no.
 6. Quit

 Enter your choice :: 1


 enter the data for first rational no.::
 enter the numerator part of the rational no. :: 3

 enter the denominator part of the rational no. :: 7


 enter the data for second rational no. ::
 enter the numerator part of the rational no. :: 2

 enter the denominator part of the rational no. :: 9


 1.Input data for rational no.
 2. Addition of rational no.
 3. Subtraction of rational no.
 4. Multiplication of rational no.
 5. Division of rational no.
 6. Quit

 Enter your choice :: 2

rational no. after addition ::
 numerator = 41
 denominator = 63

 1.Input data for rational no.
 2. Addition of rational no.
 3. Subtraction of rational no.
 4. Multiplication of rational no.
 5. Division of rational no.
 6. Quit

 Enter your choice :: 3

 rational no. after subtraction ::
 numerator = 13
 denominator = 63

 1.Input data for rational no.
 2. Addition of rational no.
 3. Subtraction of rational no.
 4. Multiplication of rational no.
 5. Division of rational no.
 6. Quit

 Enter your choice :: 4

 rational no. after multiplication ::
 numerator = 6
 denominator = 63

 1.Input data for rational no.
 2. Addition of rational no.
 3. Subtraction of rational no.
 4. Multiplication of rational no.
 5. Division of rational no.
 6. Quit

 Enter your choice :: 5

 rational no. after dividation ::
 numerator = 27
 denominator = 14

 1.Input data for rational no.
 2. Addition of rational no.
 3. Subtraction of rational no.
 4. Multiplication of rational no.
 5. Division of rational no.
 6. Quit

 Enter your choice :: 6

Process returned 1
   
*/
