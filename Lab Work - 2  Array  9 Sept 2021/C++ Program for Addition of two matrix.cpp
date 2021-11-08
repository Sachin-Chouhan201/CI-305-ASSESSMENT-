/*
C++ Program to Add Two Matrices
Write a C++ program to addition two matrices of same dimensions.
In this program, we will add two matrices of size M X N and store the sum matrix in another 2D array.

Algorithm to add two matrices

Let A and B are two matrices of dimension M X N and S is the sum matrix(S = A + B) of dimension M X N.
To add two matrices we have to add their corresponding elements. For example, S[i][j] = A[i][j] + B[i][j].
Traverse both matrices row wise(first all elements of a row, then jump to next row) using two for loops.
For every element A[i][j], add it with corresponding element B[i][j] and store the result in Sum matrix at S[i][j].
C++ Program to Add Two Matrices

C++ Program to Add two Matrices
C++ Program to Add two Matrices

// C++ program to find sum of two matrix
#include <iostream>
using namespace std;
  
int main(){
    int rows, cols, i, j;
    int one[50][50], two[50][50], sum[50][50];
     
    cout <<"Enter Rows and Columns of Matrix\n";
    cin >> rows >> cols;
      
    cout <<"Enter first Matrix of size "<<rows<<" X "<<cols;
    //  Input first matrix*/
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> one[i][j];
        }
    }
    //  Input second matrix
    cout <<"\nEnter second Matrix of size "<<rows<<" X "<<cols;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cin >> two[i][j];
        }
    }
    /* adding corresponding elements of both matrices 
       sum[i][j] = one[i][j] + two[i][j] */
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = one[i][j] + two[i][j];
        }
    }
      
    cout <<"Sum Matrix\n";
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}
Output

Enter Rows and Columns of Matrix
3 3
Enter first Matrix of size 3 X 3
1 2 3
4 5 6
7 8 9

Enter second Matrix of size 3 X 3
9 8 7 
6 5 4
3 2 1
Sum Matrix
10 10 10
10 10 10
10 10 10
/*
In above program, we first user to enter the dimensions of input matrices and store it in variable rows and cols. The dimentions of matrices must be less than 50X50. 
Then one by one, using two for loops we take input for both input matrices and store. Finally, using two for loops we add the corresponding elements of 
two input matrices and store it in corresponding element of sum matrix.


 
Points to Remember
Let A, B, and C be M X N matrices, and let 0 denote the M X N zero matrix.

Two matrices can be added only if their dimensions are same. If the size of matrices are not same, then the sum of these two matrices is said to be undefined.
The sum of two M × N matrices A and B, denoted by A + B, is again a M × N matrix computed by adding corresponding elements.
Matrix Addition is Associativity : (A + B) + C = A + (B + C)
Matrix Addition is Commutativity : A + B = B + A
Identity for Addition : 0 + A = A and A + 0 = A
*/
