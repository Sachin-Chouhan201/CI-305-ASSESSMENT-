/*
“Write a function in C++ to generate the following Pyramid of Numbers and stars”

0
101
21012
3210123

*/

#include <iostream> 
using namespace std;

int main()
{
 int i, j, k;
 for(i=1; i<=4; i++)
 {
    for(j=i-1; j>=1; j--)
        cout << j;
    cout << "0"; 
    for(k=1; k<i; k++)
        cout << k;
    cout << "\n";
 }
 return 0;
}


/*

OUTPUT:-
0
101
21012
3210123

*/
