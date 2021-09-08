/*  C++ Program to Reverse an Array using functions  */

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

        cout<<"\nStored Data in Array :: \n\n";
  
        for(i=0;i<size;i++)
        {
          cout<<" "<<a[i]<<" ";
        }
        int temp;
        size--;
        //------Reversing Array Elements ---------------
        for (int i=0;size>=i;size--,i++)
        {
                temp=array[i];
                array[i]=array[size];
                array[size]=temp;
        }
        cout << "\n\nReversed Array Values are :: " << endl;
        for(i=0;i<size;i++)
        {
          cout<<" "<<a[i]<<" ";
        }
        cout<<"\n";
        return 0;
}

/*
OUTPUT : :

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

Stored Data in Array ::
 1  2  3  4  5  6  7  8

Reversed Array Values are ::
 8  7  6  5  4  3  2  1

*/
