/* “Program for input two number and check whether it is Equal or not” */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int int1, int2;
    cout<<"Input the values for Number1 and Number2 : ";
    cin>>int1>>int2;
    if (int1 == int2)
        cout<<"Number1 and Number2 are equal\n";
    else
        cout<<"Number1 and Number2 are not equal\n";
	return 0;
}

/* 

I/P:-
10 10

OUTPUT:-
Input the values for Number1 and Number2 : 10 10
Number1 and Number2 are equal


I/P:-
10 15

OUTPUT:-
Input the values for Number1 and Number2 : 10 15
Number1 and Number2 are not equal

*/
