//C++ Program to Find Even & Odd Elements in Array

/*
C++ Program to Find Even and Odd Elements in Array
For Separate Even and Odd Elements of Array we take three array and one array for insert all Array Elements second for even elements and third for odd elements. 
We check condition for odd and even Elements arr[]%2==0.
  
*/
  
#include<iostream.h>
#include<conio.h>

 void main()
  {
   int arr[20],even[20],odd[20],i,j=0,k=0,no;
   clrscr();
   cout<<"How Size of Array: ";
   cin>>no;
   cout<<"Enter any "<<no<<" elements in Array: ";
   for(i=0; i<no;i++)
   {
   cin>>arr[i];
   }
   for(i=0; i<no;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }
  cout<<"\nEven Elements: ";
  for(i=0; i<j ;i++)
   {
    cout<<even[i]<<"  ";
   }
  cout<<"\nOdd Elements: ";
  for(i=0; i<k; i++)
   {
    cout<<odd[i]<<"  ";
   }
  getch();
  }

/*
Output
Enter Size of Array : 5
Enter any 5 elements in Array: 
10 4 5 2 7 
Even Elements: 10 4 2
Odd Elements: 7 5
*/
