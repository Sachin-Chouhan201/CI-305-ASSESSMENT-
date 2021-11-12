//C++ program to Check Number can Express as Sum of Prime Numbers 

//The following is an example to check whether a number can be expressed as sum of two prime numbers.

#include <iostream>
using namespace std;
int func(int num) {
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() {
   int num , i;
   cout << "Enter a number : \n";
   cin >> num;
   for(i = 2; i <= num/2; ++i) {
      if (func(i)) {
         if (func(num - i)) {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}
/*
Output
Enter a number : 18
18 = 5 + 13
18 = 7 + 11
In the above program, the function func() is checking that the number is prime or not.
*/
int func(int num) {
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
//In the main() function, a number is entered by the user. It is computing the number as sum of two prime numbers.

cout << "Enter a number : \n";
cin >> num;
for(i = 2; i <= num/2; ++i) {
   if (func(i)) {
      if (func(num - i)) {
         cout << num << " = " << i << " + " << num-i << endl;
      }
   }
}
