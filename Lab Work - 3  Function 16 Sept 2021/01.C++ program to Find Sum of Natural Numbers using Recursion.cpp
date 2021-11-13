//1.C++ program to Find Sum of Natural Numbers using Recursion

/*

In this program, we take positive input number from user and our program will display sum of numbers up to that number.

For example -

If user enter 8 , then our program will calculate sum upto that number.

1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36

Find Sum of N Natural Numbers using Recursion in C++

*/

#include <iostream>
using namespace std;

int sum (int n) {
 
 /* If n is less than equal to zero then return 0 */
 
 if ( n <= 0) {
  
  return 0;
  
 } else {
  
  /* Recursive call */
  
  return n + sum (n-1);
 }
}

int main() {

    int n;
    
    cout << "Enter any positive number\n";
    cin >> n;
    
    /* sum method is called */
    
    cout << "Sum of " << n << " natural numbers is " << sum (n);
    
    return 0;
}

/*

Output -

Enter any positive number :  8

Sum of 8 natural numbers is : 36


Explanation of Program

Let's suppose user has entered number 8. Our program will execute like this.

8 + sum (7)

8 + 7 + sum (6)

8 + 7 + 6 + sum (5)

8 + 7 + 6 + 5 + sum (4)

8 + 7 + 6 + 5 + 4 + sum (3)

8 + 7 + 6 + 5 + 4 + 3 + sum (2)

8 + 7 + 6 + 5 + 4 + 3 + 2 + sum (1)

8 + 7 + 6 + 5 + 4 +  3 + 2 + 1 + sum (0) // After this statement program will terminate

*/
