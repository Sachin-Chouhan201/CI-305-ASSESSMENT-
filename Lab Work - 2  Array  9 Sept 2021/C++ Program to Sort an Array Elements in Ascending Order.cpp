Sorting of array in ascending  order
There are numerous Algorithms to sort an array. Here we are using bubble sort Algorithm which takes O(n^2) time .
For Example:
Input :-    From the user {4,3,6,1,8}
Output :- In ascending order {1,3,4,6,8} .

asc_desc_sorting
Algorithm:-
Input size of array.
Store it in some variable say n and a[].
To select each element from array, run an outer loop from 0 to n-1.
Run another inner loop from i + 1 to n – 1 to place newly selected element at its correct position.
Inside inner loop to compare currently selected element with subsequent element and swap two array elements, if not placed at its correct position.
C++ Code:-
    
    //C++ Program to sort an array in ascending order
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
        for(i=0;i<n;i++)  // loop for sorting array in ascending order
        {
            for(j=i+1;j<n;j++) { 
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<“Ascending order of an array : \n“;  //print ascending order
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<” “ ;
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
    Ascending order of an array :
    1 2 5 7 9
