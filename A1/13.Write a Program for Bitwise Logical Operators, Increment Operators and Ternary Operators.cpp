/* “Write a Program for Bitwise Logical Operators, Increment Operators and Ternary Operators” */

//1. CPP program to demonstrate Bitwise Operator.

#include <iostream>
using namespace std;

int main() {
	// a = 5(00000101), b = 9(00001001)
	int a = 5, b = 9;
	// The result is 00000001
	cout<<"a = " << a <<","<< " b = " << b <<endl;
	cout << "a & b = " << (a & b) << endl;
	// The result is 00001101
	cout << "a | b = " << (a | b) << endl;
	// The result is 00001100
	cout << "a ^ b = " << (a ^ b) << endl;
	// The result is 11111010
	cout << "~(" << a << ") = " << (~a) << endl;
	// The result is 00010010
	cout<<"b << 1" <<" = "<< (b << 1) <<endl;
	// The result is 00000100
	cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
	return 0;
}

/*

OUTPUT:-
a = 5, b = 9
a&b = 1
a|b = 13
a^b = 12
~a = 250
b<<1 = 18
b>>1 = 4

*/

//2. CPP program to demonstrate Logical Operator.
#include <iostream>

int main() 
{
   int a = 5;
   int b = 20;
   int c ;
   if ( a && b ) {
      cout<<"Line 1 - Condition is true\n";
   }	
   if ( a || b ) {
      cout<<"Line 2 - Condition is true\n";
   }   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;	
   if ( a && b ) {
      cout<<"Line 3 - Condition is true\n";
   } else {
      cout<<"Line 3 - Condition is not true\n";
   }
   if ( !(a && b) ) {
      cout<<"Line 4 - Condition is true\n";
   }
	return 0;	
}

/*
OUTPUT:-	
Line 1 - Condition is true
Line 2 - Condition is true
Line 3 - Condition is not true
Line 4 - Condition is true	
	
*/	

//3. CPP program to demonstrate pre increment operator.

#include <iostream>
using namespace std;

int main()
{
	int x = 10, a;

	a = ++x;
	cout << "Pre Increment Operation";
	// Value of a will change
	cout << "\na = " << a;
	// Value of x change before execution of a=++x;
	cout << "\nx = " << x<<endl;
  
  x=10;
  a = x++;
  cout << "Post Increment Operation"; 
  // Value of a will not change
  cout << "\na = " << a;
  // Value of x change after execution of a=x++;
  cout << "\nx = " << x<<endl;

	return 0;
}


/*

OUTPUT:-
Pre Increment Operation
a = 11
x = 11

Post Increment Operation
a = 10
x = 11

*/


//4. C++ program to find largest among two numbers using ternary operator

#include <iostream>
using namespace std;

int main()
{
	int n1 = 5, n2 = 10, max;
	max = (n1 > n2) ? n1 : n2;
	cout<<"Largest number between "<<n1<<" and "<< n2<<" is "<<max;
	return 0;
}


/*

I/P:-
5 4

OUTPUT:-
Largest number between 5 and 4 is 5

*/
