/*
C++ Program to Find Largest Element of an Array
This program takes n number of element from user (where, n is specified by user) and stores data in an array. Then, this program displays the largest element of that array using loops.

To understand this example, you should have the knowledge of the following C++ programming topics:

C++ Arrays
C++ for Loop
C++ if, if...else and Nested if...else
This program takes n number of element from user(where, n is specified by user) and stores data in an array. Then, this program displays the largest element of that array using loops.

Example: Display Largest Element of an array
*/
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];

    return 0;
}
Output

Enter total number of elements: 8

Enter Number 1: 23.4
Enter Number 2: -34.5
Enter Number 3: 50
Enter Number 4: 33.5
Enter Number 5: 55.5
Enter Number 6: 43.7
Enter Number 7: 5.7
Enter Number 8: -66.5

Largest element = 55.5
/*
This program takes n number of elements from user and stores it in array arr[].

To find the largest element, the first two elements of array are checked and largest of these two element is placed in arr[0].

Then, the first and third elements are checked and largest of these two element is placed in arr[0].

This process continues until and first and last elements are checked.

After this process, the largest element of an array will be in arr[0] position.

*/
