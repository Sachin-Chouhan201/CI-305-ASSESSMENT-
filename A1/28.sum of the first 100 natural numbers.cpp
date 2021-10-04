/*
“A Program to find the sum of the first 100 natural numbers”
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    for (int i = 1; i <= 100; ++i) 
    {
        sum += i;
    }
    cout << "Sum of FIrst 100 Natural numbers = " << sum;
    return 0;
}


/*

OUTPUT:-
Sum of FIrst 100 Natural numbers = 5050

*/
