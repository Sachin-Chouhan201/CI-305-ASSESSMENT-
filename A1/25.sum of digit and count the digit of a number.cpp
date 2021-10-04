/* “A program for find out the sum of digit and count the digit of a number” */

#include<iostream>
using namespace std;
int main() {
   int x, s = 0,c=0;
   cout << "Enter the number : ";
   cin >> x;
   while (x != 0) {
      s = s + x % 10;
      x = x / 10;
      c++;
   }
   cout<<"\nThe sum of the digits : "<<s;
   cout<<"\nThe Number of the digits : "<<c;
}

/*  

I/P:-
236214828

OUTPUT:-
Enter the number : 236214828
The sum of the digits : 36
The Number of the digits : 9 

*/
