/*
Write a C++ Program to Display First and Last element of an array
Display First and Last element of an array
Write a C++ Program to Display First and Last element of an array. Here’s simple Program to Print First and Last element of an array in C++ Programming Language.

What is an Array ?
Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. 
An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

 
Instead of declaring individual variables, such as number0, number1, …, and number99, you declare one array variable such as numbers and use numbers[0], 
numbers[1], and …, numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.



 
SOURCE CODE : :
/*  C++ Program to Display First and Last element of an array  */

#include <iostream>
using namespace std;

int main()
{

    int i,a[50],size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

    cout<<"\nFirst number in the Array :: "<<a[0]<<endl;
    // first element of an array is a[0]
    
    cout<<"\nLast number in the Array :: "<<a[size-1]<<endl;
    // last element of an array is n[SIZE_OF_ARRAY - 1]
    return 0;
}
OUTPUT : :
/*  C++ Program to Display First and Last element of an array  */

Enter array size( Max:50 ) :: 8

Enter array elements ::

Enter arr[0] Element :: 1

Enter arr[1] Element :: 2

Enter arr[2] Element :: 3

Enter arr[3] Element :: 4

Enter arr[4] Element :: 5

Enter arr[5] Element :: 6

Enter arr[6] Element :: 7

Enter arr[7] Element :: 8

First number in the Array :: 1

Last number in the Array :: 8

