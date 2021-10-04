/*
“A Program for Swapping of two numbers with and without temporary variable"
*/

//C++ Program to Swap two numbers using  ‘+’ ‘-‘ operators:

#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter number a : ";
    cin >> a;
    cout << endl << "Enter number b : ";
    cin >> b;

    cout << endl << "Before swapping a = " << a << " b = " << b;
    a = a + b;  // \ ex. a=5,b=6  so,  here a = 5+6 = 11
    b = a - b;  // \  b= a-b i.e. b = 11-6 = 5
    a = a - b;  // \  a= a-b i.e. a = 11-5 = 6
    cout << endl << "After swapping a = " << a << " b = " << b << endl;

    return 0;
}

/*

I/P:-
5 6

Output:-

Enter number a : 5
Enter number b : 6
Before swapping a = 5 b = 6
After swapping a = 6 b = 5

*/


//C++ Program to Swap two numbers using  ‘+’ ‘-‘ operators:

#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter number a : ";
    cin >> a;
    cout << endl << "Enter number b : ";
    cin >> b;

    cout << endl << "Before swapping a = " << a << " b = " << b;
    a=a*b;   //\ ex. a=10,b=5  so,  here a = 5*10 = 50
    b=a/b;  // \  b= a/b i.e. b =50/5 = 10
    a=a/b;  // \  a= a/b i.e. a =50/10 = 5
    cout << endl << "After swapping a = " << a << " b = " << b << endl;

    return 0;
}

/*

I/P:-
10 5

Output:-

Enter number a : 10
Enter number b : 5
Before swapping a = 10 b = 5
After swapping a = 5 b = 10

*/


//C++ Program to Swap two numbers using Bitwise XOR ‘^’

#include<iostream>
using namespace std;
int main()
{
   int a, b;
   cout<<"Enter two integers to swap\n";
   cout<<"Enter a= ";
   cin>>a;
   cout<<"Enter b= ";
   cin>>b;
   //let a=10  and b=5
   // Code to swap 'a' (1010) and 'b' (0101)                       a  =      1010              now a =      1111                   now b  =     1010 
   a=a^b; // a now becomes 15 (1111)                               b  =      0101                  b =      0101                      a   =     1111
   b=a^b; // b becomes 10 (1010)                                        ^  -------                    ^   --------                     ^     ---------
   a=a^b; // a becomes 5 (0101)                                 a=a^b =      1111 (15)         b=a^b =      1010 (10)                 a=a^b =   0101   (5)
   cout<<"\nAfter Swapping\n";
   cout<<"a = "<<a<<"\nb = "<<b;
   return 0;
}


/*

I/P:-
10 5

Output:-

Enter number a : 10
Enter number b : 5
Before swapping a = 10 b = 5
After swapping a = 5 b = 10

*/
