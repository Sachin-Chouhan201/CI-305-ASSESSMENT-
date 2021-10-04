/* “Write a Program to Input a Year and Check whether it is Leap Year or not” */

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}

/*

I/P:-
2014

OUTPUT:-
Enter a year: 2014
2014 is not a leap year.

*/
