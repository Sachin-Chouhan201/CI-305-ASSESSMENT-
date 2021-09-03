/*
“A program for Mark sheet Calculations (total, percentage and result) using ternary operator”
*/

#include<iostream>
using namespace std;

int main()
{
    int i, n;
    float avg=0, per;
    cout<<"Enter Number of Subjects: ";
    cin>>n;
    float arr[n]
    cout<<"\nEnter Marks obtained in "<<n<<" Subjects Out of 70 : ";
    for(i=0; i<n; i++)
    { 
        cin>>arr[i];
        avg = avg+arr[i];
    }
    per=avg/(70*n);
    per*=100;
    avg=avg/n;
    cout<<"\nMarks obtained in "<<n<<" Subjects: "<<endl;
    for(i=0; i<n; i++)
        cout<<arr[i]<<endl;
    cout<<"\nAverage Marks = "<<avg;
    cout<<"\nPercentage Marks = "<<per<<"%";
    cout<<endl;
    return 0;
}


/*

I/P:-
5
56
56
56
56
65


OUTPUT:-
Enter Number of Subjects: 5
Enter Marks obtained in 5 Subjects Out of 70 : 56 56 56 56 65
Marks obtained in 5 Subjects: 
56
56
56
56
65

Average Marks = 57.8
Percentage Marks = 82.5714%


*/
