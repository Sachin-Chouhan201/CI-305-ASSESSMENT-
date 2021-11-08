/*
We will write a C++ Program to Calculate Arithmetic Mean. Before that, you should have knowledge of the topics in C++ given below.

C++ for loops
C++ operators
C++ Array
Arithmetic mean is the sum of a collection of numbers divided by the number of numbers in the collection. For example:

arithmetic mean = (n1 + n2 +n3 + ... + nn)/n


 
The program takes a number as an input from the user whose arithmetic mean is to be calculated. Then iterating that number through a for loop, we will calculate the sum of the number and then finally calculate the mean of the result of the sum of the number.

Lastly, display the arithmetic mean of the entered number in C++.

Arithmetic Mean Program in C++
There is a use of an array to store the numbers entered by the user.

*/
#include <iostream>
using namespace std;
 
int main()
{
   int num, i, arr[50], sum = 0, armean;
 
   cout << "How many number you want to enter?: ";
   cin >> num;
 
   cout << "Enter " << num << " Number:\n";
   for (i = 0; i < num; i++)
   {
      cin >> arr[i];
      sum = sum + arr[i];
   }
 
   armean = sum / num;
 
   cout << "Arithmetic Mean: " << armean;
 
   return 0;
}
/*
Output:

How many number you want to enter?: 4
Enter 4 Number:
2
3
4
1
Arithmetic Mean: 2

Also, you can change the data type according to your need. It could be float, double, etc.
*/
