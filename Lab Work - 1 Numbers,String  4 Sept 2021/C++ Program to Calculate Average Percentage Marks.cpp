/* 
You should have the knowledge of following these topics in c++ programming to understand this example:
C++ main() function
C++ cin object
C++ cout object
 

Formula
Total = marks1 + marks2 + marks3 + marks4 + marks5

Average = Total / 5.0

Percentage = (Total / 500.0) x 100

 

Where marks1, marks2, marks3, marks4, and marks5 are the marks of five subjects.

 
*/
//Source Code
// C++ program to enter the marks of five subjects and calculate total, average, and percentage
#include <iostream>

using namespace std;

int main()
{
    float p, c, m, e, h, total, average, percentage;
    
    // p, c, m, e, and h are the five subjects
    // p = physics
    // c = chemistry
    // m = math
    // e = english
    // h = history

    cout << "Enter the marks of five subjects::\n";
    cin >> p >> c >> m >> e >> h;

    // Calculate total, average and percentage
    total = p + c + m + e + h;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // Output
    cout << "The Total marks   = " << total << "/500\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Percentage    = " << percentage << "%";

    return 0;
}
/*

Run Program

Output
Enter the marks of five subjects::

95
85
74
64
53
The Total marks      = 371/500
The Average marks    = 74.2
The Percentage       = 74.2%

 

Explanation
Average: we take the marks of five subjects as input after that the sum of these marks divided by 5 then It will return the average value of the marks.

Percentage: we made a division of the sum of user's marks by 500 then It multiplied by 100 then It will return the percentage value of the marks.
*/
