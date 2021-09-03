/* “Write a Program for Bitwise Logical Operators, Increment Operators and Ternary Operators” */




//2. CPP program to demonstrate pre increment operator.

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


//3. C++ program to find largest among two numbers using ternary operator

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
