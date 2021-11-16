//4. To pass by reference using pointer. 
//  Swap two numbers

#include <iostream>
using namespace std;
 
void swapUsingAddress(int *m, int *n){
    int temp= *m;
    *m=*n;
    *n=temp;
}
 
int main()
{
    int a,b;
    
    cout << "Enter two numbers A & B"<< endl; 
    cin >> a;
    cin >> b;
    
    cout << "Value of A before swapping: " << a <<endl;
    cout << "Value of B before swapping: " << b <<endl;
    
    //passing address of a and b
    swapUsingAddress(&a, &b); 
 
    cout << "Value of A after swapping: " << a <<endl;
    cout << "Value of B after swapping: " << b <<endl;
}
/*
Output:

Enter two numbers A & B
9 5
Value of A before swapping: 9
Value of B before swapping: 5
Value of A after swapping: 5
Value of B after swapping: 9
*/
