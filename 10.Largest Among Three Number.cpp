/* “Program for input three number and find the greatest element 
1.      using Simple if, 
2.      Nested if………else,
3.      if…..else if…….. if Statement,
4.      ternary operator     " 
*/

// 1. Find Largest Number Using Simple if Statement
#include <iostream>
using namespace std;

int main()
{    
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
   
  if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
    if(n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;
  
    return 0;
}

/* 

I/P:-
2.3  8.3 -4.2

OUTPUT:-
Enter three numbers: 2.3  8.3  -4.2
Largest number: 8.3

*/


// 3. Find Largest Number Using Nested if...else statement
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }

    return 0;
}

/* 

I/P:-
2.3  8.3 -4.2

OUTPUT:-
Enter three numbers: 2.3  8.3  -4.2
Largest number: 8.3

*/

// 3. Find Largest Number Using if...else Statement
#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if((n1 >= n2) && (n1 >= n3))
        cout << "Largest number: " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
        cout << "Largest number: " << n2;
    else
        cout << "Largest number: " << n3;
    
    return 0;
}

/*
I/P:-
2.3  8.3 -4.2

OUTPUT:-
Enter three numbers: 2.3 8.3 -4.2
Largest number: 8.3

*/

// 4. Find Largest Number Using  ternary operator.
#include <iostream>
using namespace std;

int main()
{    
    float n1, n2, n3,greatest;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
   	greatest=(n1>n2&&n1>n3)?n1:(n2>n3)?n2 : n3; 
    cout << "Largest number: " << greatest;
    return 0;
}

/* 

I/P:-
2.3  8.3 -4.2

OUTPUT:-
Enter three numbers: 2.3  8.3  -4.2
Largest number: 8.3
*/
