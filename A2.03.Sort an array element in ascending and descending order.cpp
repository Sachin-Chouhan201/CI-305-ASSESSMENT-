/* C++ Program to Sort Array Elements in Ascending order  */
#include <iostream>
using namespace std;

int main() {
    int a[100],n;
    cout<<“Enter the size of array (max.100) : \n“;  
    cin>>n;
    cout<<“Enter the elements : \n“;  
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Before Sorting : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }  
    for(int i=0;i<n;i++)  
    {
        for(int j=i+1;j<n;j++) 
        { 
          if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Ascending order of an array : \n";  
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<” “;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
               int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nDescending order of an array : \n";  
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*
OUTPUT:-

Enter the size of array (max.100) : 5
Enter the elements : 4 8 6 2 9
Array Before Sorting : 
4 8 6 2 9
Ascending order of an array : 
2 4 6 8 9 
Descending order of an array : 
9 8 6 4 2 

*/
