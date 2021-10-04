/* 
“A program for finding the given number is odd or even and first number is divisible by second using Switch Case Statement”
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  switch(n%2==0)
  { 
    case 1:
              cout << n << " is even."<<endl;
              break;
    case 0: 
              cout << n << " is odd."<<endl;
              break;
  }
  int a,b;
  cout<<"Enter Two Numbers : "<<endl;
  cin>>a>>b;
  if(b==0)
  {
     cout<<"Please enter a valid number"<<endl;
     exit(0);
  }
  switch(a%b==0)
  {
    case 1:
              cout<<a<<" is Divisible by "<<b<<" i.e first number is divisible by second "<<endl;
              break;      
    case 0:   
              cout<<a<<" is Not Divisible by "<<b<<" i.e first number is Not divisible by second "<<endl;
              break;      
    default:
              cout<<"Please enter a valid number"<<endl;
              break;
  }
  return 0;
}



/*

I/P:-
12
12
123

OUTPUT:-
Enter an integer: 12 is even.
Enter Two Numbers : 12 123
12 is Not Divisible by 123 i.e first number is Not divisible by second 

*/
