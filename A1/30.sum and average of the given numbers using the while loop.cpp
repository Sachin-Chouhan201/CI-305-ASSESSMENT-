/*
“A Program to find the sum and average of the given numbers using the while loop”
*/

#include <iostream>
using namespace std;

int main()
{
    int number,sum = 0,n=0; 
    cout<<"Enter a number: ";
    cin>>number;

    while(number>=0) 
    {
        n++;
        sum+=number;    // add all positive numbers
        cout<<"Enter a number: ";   // take input again if the number is positive
        cin>>number;
    }
  
    cout<<"The sum is " <<sum<<endl;              // display the Sum
    cout<<"The Avg is " <<(float)sum/n<<endl;     // display the Avg
    return 0;
}

/*

I/P:-
6
12
7
0
-2

OUTPUT:-
Enter a number: 6
Enter a number: 12
Enter a number: 7
Enter a number: 0
Enter a number: -2

The sum is 25
The Avg is 6.25

*/
