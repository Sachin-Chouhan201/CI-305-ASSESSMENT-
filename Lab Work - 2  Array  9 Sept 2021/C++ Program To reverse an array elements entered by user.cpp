/*
Write a C++ program to reverse an array.
C++ program to print array elements in reverse sequence.
In this C++ program, we will reverse the sequence of array elements. After reversing first element of array become the last element, second element becomes second last element and so on.

For Example :
Original Array : [1 2 3 4 5 6 7 8]
Reversed Array : [8 7 6 5 4 3 2 1]
Algorithm to reverse an array
First of all take number of elements as input from user. Let it be N.
Then ask user to enter N numbers and store it in an array(lets call it inputArray).
Declare another array of size equal to input array.
Using a for loop, copy elements from inputArray to reverseArray in reverse order. For example, 
copy last element of inputArray to first position of reverseArray and so on.
C++ Program to Reverse an Array
*/
// C++ Program to reverse an array
 
#include <iostream>
using namespace std;
  
int main(){
    int input[500], output[500], count, i;
      
    cout << "Enter number of elements in array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    // Copy numbers from inputArray to outputArray in 
    // reverse order 
    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }    
    // Print Reversed array
    cout << "Reversed Array\n";
    for(i = 0; i < count; i++){
        cout << output[i] << " ";
    }
          
    return 0;
}
Output
Enter number of elements in array
5
Enter 5 numbers
1 2 3 4 5
Reversed Array
5 4 3 2 1
/*
In above C++ program we first take number of elements in array as input from user as store it in variable count. We then ask user to enter array elements 
and store it in an integer array "input". Using a for loop, we copy the elements from input array to output array in reverse order 
and finally print reversed array on screen.
*/
