#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum=0;
    cout<<"Enter the Number: ";
    cin>>num;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    cout<<"\nSum of Digits = "<<sum;
    cout<<endl;
    return 0;
}

/*

The dry run of above program goes like:

After receiving the number say 1234, num=1234
Because it is greater than 0, therefore condition evaluates to be true, and program flow goes inside the while loop
num%10 or 1234%10 or 4 gets initialized to rem. So rem=4
sum+rem or 0+4 (initial value of sum is 0) or 4 gets initialized to sum
The new value of sum is 4
num/10 or 1234/10 or 123 gets initialized to num
Again it is greater than 0, therefore the condition of while loop evaluates to be true, and again the program flow goes inside the loop
num%10 or 123%10 or 3 gets initialized to rem. So rem=3
sum+rem or 4+3 or 7 gets initialized to sum
Now the new value of sum is 7
num/10 or 123/10 or 12 gets initialized to num
Again it is greater than 0, therefore program flow again goes inside the loop, and executes all the three statements
Continue the operation, until the value of num becomes 0
After exiting from the loop, we'll have a variable sum that holds the sum of digits of given number
Therefore, just print the value of sum as output

*/
