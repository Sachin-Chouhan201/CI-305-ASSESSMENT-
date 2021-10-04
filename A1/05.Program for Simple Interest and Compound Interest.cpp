/* “Write a Program for Simple Interest and Compound Interest” */

#include <bits/stdc++.h>
using namespace std;
int main(){
   double principle,rate,time;
   cout<<"Enter the Principle Amount, Rate and Time ";
   cin>>principle>>rate>>time;
   cout<<"Principle Amount : "<<principle<<" Rs."<<endl;
   cout<<"Interest Rate    : "<<rate<<" %"<<endl;
   cout<<"Time             : "<<time<<" years"<<endl;
   double CI = principle * (pow((1 + rate / 100), time));
   double SI=principle*rate*time;
   SI=SI/100;
   cout<<"Compound Interest is " <<CI<<" Rs."<<endl;
   cout<<"Simple Interest is   " <<SI<<" Rs."<<endl;
   return 0;
}

/*
OUTPUT :-

Enter the Principle Amount, Rate and Time Principle Amount : 300 Rs.
Interest Rate    : 4 %
Time             : 5 years
Compound Interest is 364.996 Rs.
Simple Interest is   60 Rs.


*/
