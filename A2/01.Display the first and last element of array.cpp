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

    cout<<"\nFirst number in the Array :: "<<a[0]<<endl;    // first element of an array is a[0]    
    cout<<"\nLast number in the Array :: "<<a[size-1]<<endl;    // last element of an array is n[SIZE_OF_ARRAY - 1]

    return 0;
}

/*
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

*/
