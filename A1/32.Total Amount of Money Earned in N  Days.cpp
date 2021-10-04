/* 
“A program to calculating the total amount of money earned in n day.”
*/

#include <iostream>
using namespace std;

int main()
{
    int days,per_day;
    cout<<"Enter The Amount Earned in 1 Day Rs. : ";
    cin>>per_day;
    cout<< endl<<"Enter The Days Worked : ";
    cin>>days;
    cout<<endl<<"The Total Amount of Money Earned in "<<days<<" days is Rs. "<<days*per_day;
    return 0;
}

/*

I/P:-
100
43

OUTPUT:-
Enter The Amount Earned in 1 Day Rs. : 100
Enter The Days Worked : 43
The Total Amount of Money Earned in 43 days is Rs. 4300

*/
