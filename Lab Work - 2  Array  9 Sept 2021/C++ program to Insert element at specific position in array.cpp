//C++ Program to Insert an element in an array at specific position

/*
Insert an element in an array at specific position
Write a C++ Program to Insert an element in an array at specific position. Here’s simple Program to Insert an element in an array at specific position in C++ Programming
Language.

What is an Array ?
Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is
often more useful to think of an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number0, number1, …, and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and …, 
numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

SOURCE CODE : :
// C++ Program to Insert an element in an array at specific position  
*/
#include<iostream>

using namespace std;

int main()
{
    int i,a[50],no,pos,size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

  cout<<"\nStored Data in Array :: \n\n";

  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }

  cout<<"\n\nEnter position to insert number :: ";
  cin>>pos;

  if(pos>size)
  {
    cout<<"\nThis is out of range.\n";
  }
  else
  {
    cout<<"\nEnter number to be inserted :: ";
    cin>>no;
    --pos;

  for(i=size;i>=pos;i--)
  {
    a[i+1]=a[i];
  }
  a[pos]=no;

  cout<<"\nNew Array is :: \n\n";

  for(i=0;i<size+1;i++)
  {
    cout<<" "<<a[i]<<" ";
  }

  }
  cout<<"\n";

  return 0;

  }
/*
OUTPUT : :

/*  C++ Program to Insert an element in an array at specific position  

Enter array size( Max:50 ) :: 6

Enter array elements ::

Enter arr[0] Element :: 1

Enter arr[1] Element :: 2

Enter arr[2] Element :: 3

Enter arr[3] Element :: 4

Enter arr[4] Element :: 5

Enter arr[5] Element :: 6

Stored Data in Array ::

 1  2  3  4  5  6

Enter position to insert number :: 0

Enter number to be inserted :: 0

New Array is ::

 0  1  2  3  4  5  6

Process returned 0

*/
