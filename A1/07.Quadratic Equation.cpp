/* “Write a Program for Solving Quadratic Equation” */

/*

There are three cases −

b2 < 4*a*c - The roots are not real i.e. they are complex
b2 = 4*a*c - The roots are real and both roots are the same.
b2 > 4*a*c - The roots are real and both roots are different

*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
   int a,b,c;
   cout<<"Enter The Value of ax2 + bx + c A,B,C of The Quadratic Equation : ";
   cin>>a>>b>>c;
   cout<<"The Given Quadratic Equation is "<<a<<" x^2 + "<<b<<" x + "<<c<<" ."<<endl;
   float discriminant, realPart, imaginaryPart, x1, x2;
   if (a == 0) 
   {
      cout << "This is not a quadratic equation";
   }
   else 
   {
      discriminant = b*b - 4*a*c;
      if (discriminant > 0) 
      {
         x1 = (-b + sqrt(discriminant)) / (2*a);
         x2 = (-b - sqrt(discriminant)) / (2*a);
         cout << "Roots are real and different." << endl;
         cout << "Root 1 = " << x1 << endl;
         cout << "Root 2 = " << x2 << endl;
      } 
      else if (discriminant == 0) 
      {
         cout << "Roots are real and same." << endl;
         x1 = (-b + sqrt(discriminant)) / (2*a);
         cout << "Root 1 = Root 2 =" << x1 << endl;
      }
      else 
      {
         realPart = (float) -b/(2*a);
         imaginaryPart =sqrt(-discriminant)/(2*a);
         cout << "Roots are complex and different." << endl;
         cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
         cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;
      }
   }
   return 0;
}

/*
I/P :-
1 2 1

OUTPUT:-

Enter The Value of ax2 + bx + c A,B,C of The Quadratic Equation :
The Given Quadratic Equation is 1 x^2 + 2 x + 1 .
Roots are real and same.
Root 1 = Root 2 =-1


*/
