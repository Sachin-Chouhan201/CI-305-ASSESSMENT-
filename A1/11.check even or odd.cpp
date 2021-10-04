/* “Write a Program to input a Number and Check whether it is even or odd” */

#include <iostream>
using namespace std;

int main() {
	int num;

    cout<<"Enter any number to check even or odd: ";
    cin>>num;
    if(num % 2 == 0)
        cout<<"Number is Even.";
    else
        cout<<"Number is Odd.";
	return 0;
}


/*

I/P:-
10
OUTPUT:-
Enter any number to check even or odd: 10
Number is Even.


I/P:-
12
OUTPUT:-
Enter any number to check even or odd: 10
Number is Odd.
*/
