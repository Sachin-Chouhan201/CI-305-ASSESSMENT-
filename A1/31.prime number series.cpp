/* “A Program for generate prime number series” */

#include <iostream>
using namespace std;

int main()
{

    int num, i, upto;
    cout << "Find prime numbers upto : ";
    cin >> upto;
    cout << endl << "All prime numbers upto " << upto << " are : " << endl;

    for(num = 2; num <= upto; num++)
    {
        for(i = 2; i <= (num / 2); i++) 
            if(num % i == 0) 
            {
                i = num;
                break;
            }
        if(i != num)              // If the number is prime then print it.
            cout << num << " ";
    }
    return 0;
}


/*

I/P:-
100

OUTPUT:-
Find prime numbers upto : 100
All prime numbers upto 100 are :
3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

*/
