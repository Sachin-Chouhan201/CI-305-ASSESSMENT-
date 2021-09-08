/*  C++ Program to Add Two Matrices using array  */

#include<iostream>
using namespace std;

int main()
{
    int arr1[5][5], arr2[5][5], arr3[5][5], sub, i, j,m,n;
    cout<<"Enter size of matrix ( Max:5 ) :: ";
    cin>>m;
    cout<<"\nEnter Elements to Matrix A Below :: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\nEnter arr1["<<i<<"]["<<j<<"] Element :: ";
            cin>>arr1[i][j];
        }
    }
  
    cout<<"\nEnter Elements to Matrix B Below :: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"\nEnter arr2["<<i<<"]["<<j<<"] Element :: ";
            cin>>arr2[i][j];
        }
    }

  cout<<"\nAdding Matrix ( A + B ) ..... \n";
  for(i=0; i<m; i++)
  {
    for(j=0; j<m; j++)   
    {    
      arr3[i][j]=arr1[i][j]+arr2[i][j];
    }    
  }
  
  cout<<"\nAfter Addition, Matrix C is :: \n";        
  for (i = 0; i < m; ++i)  
  {            
    for (j = 0; j < m; ++j)    
    {    
      cout<<"\t"<<arr3[i][j];      
    }    
    cout<<endl;;    
  }
  
  return 0;
}

/*
OUTPUT : :

Enter size of matrix ( Max:5 ) :: 3

Enter Elements to Matrix A Below ::
Enter arr1[0][0] Element :: 1
Enter arr1[0][1] Element :: 2
Enter arr1[0][2] Element :: 3
Enter arr1[1][0] Element :: 4
Enter arr1[1][1] Element :: 5
Enter arr1[1][2] Element :: 6
Enter arr1[2][0] Element :: 7
Enter arr1[2][1] Element :: 8
Enter arr1[2][2] Element :: 9

Enter Elements to Matrix B Below ::
Enter arr2[0][0] Element :: 1
Enter arr2[0][1] Element :: 2
Enter arr2[0][2] Element :: 3
Enter arr2[1][0] Element :: 4
Enter arr2[1][1] Element :: 5
Enter arr2[1][2] Element :: 6
Enter arr2[2][0] Element :: 7
Enter arr2[2][1] Element :: 8
Enter arr2[2][2] Element :: 9

Adding Matrix ( A + B ) .....

After Addition, Matrix C is ::
        2       4       6

        8       10      12

        14      16      18
*/
