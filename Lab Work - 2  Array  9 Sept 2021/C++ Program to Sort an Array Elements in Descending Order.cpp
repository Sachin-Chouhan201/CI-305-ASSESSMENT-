/*
Sorting of array in descending order
There are numerous Algorithms to sort an array. Here we are using bubble sort Algorithm which takes O(n^2) time .
For Example:
Input :-    From the user {4,3,6,1,8}
Output :- In descending order {8,6,4,3,1}.

asc_desc_sorting
Algorithm:-
Input size of array.
Store it in some variable say n and a[].
To select each element from array, run an outer loop from 0 to n-1.
Run another inner loop from i + 1 to n – 1 to place newly selected element at its correct position.
Inside inner loop to compare currently selected element with subsequent element and swap two array elements, if not placed at its correct position.
C++ Code:-
 */
    //C++ Program to sort an array in descending order
    #include <iostream>
    using namespace std;
    void  main()
    {
        int i,j,n,a[100],temp,p,q,temp1;
        cout<<“Enter the size of array : \n“ ;  //Taking size of array
        cin>>n;
        cout<<“Enter the elements : \n“ ;  //Taking input from user
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(p=0;p<n;p++) // loop for sorting array in descending order
        {
            for(q=p+1;q<n;q++)
            {
                if(a[p]<a[q])
                {
                    temp1=a[p];
                    a[p]=a[q];
                    a[q]=temp1;
                }
            }
        }
        cout<<“\n Descending order of an array : \n“;  // print descending order
        for(p=0;p<n;p++)
        {
            cout<<a[p]<<” “;
        }
    }
    
    Output:-
    Enter the size of array :
    5
    Enter the elements :
    9
    5
    1
    2
    7
 
    Descending order of an array :
    9 7 5 2 1
