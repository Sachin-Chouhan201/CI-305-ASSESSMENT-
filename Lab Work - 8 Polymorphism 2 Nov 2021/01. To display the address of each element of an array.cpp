//1. To display the address of each element of an array.

/*

Explanation:-
address of array element in c++, we have to print the address of an array(an array each variable of an array) or we have to display the memory location 
of each element of an array we can do this by adding "address of" or "&" operator. Ths "&" operator returns the address of a variable in a memory location. 
or we can do this by using a pointer for that we have to transfer all array elements to pointer one by one and print the pointer value as we know that pointer
is a variable that holds the address of another variable so each time in a Loop we assign the array value to a pointer and print the value of hold by pointer.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
 
 int i, size;
 
 cout<<"=======================================\n";
 cout<<"Enter The Size of The Array ";
 cout<<"\n=======================================\n";
 
 cin>>size;
 
    int array[size];
    int *ptr;
 
 cout<<"=======================================\n";
 cout << "Enter The Elements Of An array";
 cout<<"\n=======================================\n";
 
 for (i = 0; i < size; i++) 
 {
        cin>>array[i];    
 }
 
 cout<<"=======================================\n";
 cout << "Displaying An Address Using An Arrays";    
 cout<<"\n=======================================\n\n";
 for (i = 0; i < size; i++) 
 {
        cout << "Address Of " << array[i]<<" Using Array is ===> " << &array[i]<<endl;    
 }

    cout<<"\n=======================================\n";
 cout << "Displaying An Address Using Pointers";
 cout<<"\n=======================================\n";
    for (i = 0; i < size; i++) 
 {
  ptr = &array[i];   // ptr = &a[0]
        cout << "Address Of " << array[i] << " Using Pointers is ===> "<<ptr<<endl;
 }
 cout<<"\n========================================\n";
    return 0;
}

/*
Output:-

=======================================
Enter The Size of The Array 
=======================================
4
=======================================
Enter The Elements Of An array
=======================================
5
4
5
6
=======================================
Displaying An Address Using An Arrays
=======================================

Address Of 5 Using Array is ===> 0x7ffd940dc4f0
Address Of 4 Using Array is ===> 0x7ffd940dc4f4
Address Of 5 Using Array is ===> 0x7ffd940dc4f8
Address Of 6 Using Array is ===> 0x7ffd940dc4fc

=======================================
Displaying An Address Using Pointers
=======================================
Address Of 5 Using Pointers is ===> 0x7ffd940dc4f0
Address Of 4 Using Pointers is ===> 0x7ffd940dc4f4
Address Of 5 Using Pointers is ===> 0x7ffd940dc4f8
Address Of 6 Using Pointers is ===> 0x7ffd940dc4fc

========================================
  
