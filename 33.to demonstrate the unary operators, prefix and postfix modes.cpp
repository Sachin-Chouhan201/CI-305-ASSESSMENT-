/*
“Program to demonstrate the unary operators, prefix and postfix modes.”
*/

#include <iostream>
using namespace std;
int main()
{
	// Post increment
	int a = 1;
	cout << "a value: " << a << endl;
	int b = a++;
	cout << "b value after a++ : " << b << endl;
	cout << "a value after a++ : " << a << endl;
  
	// Pre increment
	a = 1;
	cout << "a value:" << a << endl;
	b = ++a;
	cout << "b value after ++a : " << b << endl;
	cout << "a value after ++a : "<< a << endl;

	// Post decrement
	a = 5;
	cout << "a value before decrement: " << a << endl;
	b = a--;
	cout << "b value after a-- : " << b << endl;
	cout << "a value after a-- : " << a << endl;

	// Pre decrement
	a = 5;
	cout << "a value: "<< a<<endl;
	b = --a;
	cout << "b value after --a : " << b << endl;
	cout << "a value after --a : " << a << endl;

	return 0;
}


/*
OUTPUT:-
a value: 1
b value after a++ : 1
a value after a++ : 2
a value:1
b value after ++a : 2
a value after ++a : 2
a value before decrement: 5
b value after a-- : 5
a value after a-- : 4
a value: 5
b value after --a : 4
a value after --a : 4

*/
