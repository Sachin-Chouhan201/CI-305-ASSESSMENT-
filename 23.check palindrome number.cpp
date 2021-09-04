/* “Program for Display Reverse of a number and show a reverse number is palindrome or not” */

#include<iostream>
using namespace std;

int main()
{
   int num, reverse = 0, remainder, temp;
   // reverse is used to store to reverse number
   cout << "Enter the number: ";
   cin >> num;

   temp = num; // original number is stored in temp variable

   while( temp != 0)
   {
      remainder = temp % 10;
      reverse = reverse * 10 + remainder;
      temp = temp / 10;
   }

   cout << "Reversed number: " << reverse << endl;

   if (num == reverse) // checking whether num is equal to reverse
      cout << "\n" << num << " is a palindrome number." << endl;
   else
      cout << "\n" << num << " is not a palindrome number." << endl;
   return 0;
}

/* 

I/P:-
121 

OUTPUT:-
Enter the number: 121
Reversed number: 121

121 is a palindrome number.


I/P:-
1231

OUTPUT:-
Enter the number: 1231
Reversed number: 1321

1231 is not a palindrome number.

*/
