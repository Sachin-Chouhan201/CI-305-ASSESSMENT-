/*
“Program for convert seconds into minutes and hours. ”
*/

#include <iostream>
using namespace std;
 
int main()
{
    int time=0,hour=0,min=0,sec=0;
    cout << "Enter a time in seconds: ";
    cin >> time;
    // convert secs to HH:MM:SS format using division and modulus
    hour = time/3600;
    time = time%3600;
    min = time/60;
    time = time%60;
    sec = time;
    cout<<"The time in HH:MM:SS format is: "<<hour<<" hours, "<<min<<" minutes, and "<<sec<<" seconds!\n";
    //  HH::MM::SS (hours, minutes, seconds) format
    return 0;
}

/*

I/P:-
9630

OUTPUT:-
Enter a time in seconds: 9630
The time in HH:MM:SS format is: 2 hours, 40 minutes, and 30 seconds!


I/P:-
7200

OUTPUT:-
Enter a time in seconds: 7200
The time in HH:MM:SS format is: 2 hours, 0 minutes, and 0 seconds!


I/P:-
45

OUTPUT:-
Enter a time in seconds: 45
The time in HH:MM:SS format is: 0 hours, 0 minutes, and 45 seconds!


I/P:-
134

OUTPUT:-
Enter a time in seconds: 134
The time in HH:MM:SS format is: 0 hours, 2 minutes, and 14 seconds!

I/P:-
31536000

OUTPUT:-
Enter a time in seconds: 31536000
The time in HH:MM:SS format is: 8760 hours, 0 minutes, and 0 seconds!


*/
