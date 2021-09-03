/* 
“Write a Program to Input a character and check whether it is in uppercase, lowercase,
digit or symbol and convert it to uppercase to lower case and lowercase to uppercase”
*/

#include <iostream>
using namespace std;

int main() {
    
    char x;
    cin >> x;
    if (islower(x))
    {
        cout<<"You entered a Lowercase character. "<<x<<endl;
        x= toupper(x);
        cout<<x<<endl;
    }
    else if(isupper(x))
    {
        cout<<"You entered a Uppercase character. "<<x<<endl;   
        x=tolower(x);        
        cout<<x<<endl;

    }
    else if(x>=48&&x<=57)
    {       
       cout<<"You entered a digit. "<<endl;
    }
    else
    cout<<"You entered a special character. "<<endl;
    return 0;
}


/*
I/P:-
10

OUTPUT:-
You entered a digit.
 
 
I/P:-
a

OUTPUT:-
You entered a Lowercase a
A

*/
