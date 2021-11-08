/*
Different Ways to Compare Strings in C++
This section will discuss the different ways to compare the given strings in the C++ programming language. 
The comparison of the string determines whether the first string is equal to another string or not. Example: HELLO and Hello are two different strings.

Different Ways to Compare Strings in C++
There are different ways to compare the strings in the C++ programming language, as follows:

Using strcmp() function
Using compare() function
Using Relational Operator
Using For loop and If statement
Using user-defined function
strcmp() function
The strcmp() is a pre-defined library function of the string.h header file. The strcmp() function compares 
two strings on a lexicographical basis. This means that the strcmp() function starts comparing the first string
with the second string, character by character until all characters in both strings are the same or a NULL character is encountered.

Syntax


int strcmp ( const char *leftstr, const char *rightstr );   
Parameters:

leftstr: It defines the characters of the left string.

rightstr: It defines the characters of the right string.

Returns:

The leftstr string compares each character with the second string from the left side till the end of both strings.
And, if both the strings are equal, the strcmp() function returns strings are equal. Else, the strings are not equal.

Let's create a program to compare strings using the strcmp() function in C++.
*/
//Program1.cpp

#include <iostream>  
using namespace std;  
#include <string.h>  
  
int main ()  
{  
    // declare strings  
    const char *str1 = " Welcome to JavaTpoint";  
    const char *str2 = " Welcome to JavaTpoint";  
      
    const char *str3 = " JavaTpoint";  
    const char *str4 = " Javatpoint";  
      
    cout << " String 1: " << str1 << endl;  
    cout << " String 2: " << str2 << endl;  
      
    // use strcmp() function to validate the strings are equal  
    if (strcmp (str1, str2) == 0)  
    {  
        cout << " \n Both strings are equal. " << endl;  
    }  
    else   
        {  
          
        cout << " The strings are not equal. " << endl;  
    }  
          
    cout << " \n String 3: " << str3 << endl;  
    cout << " String 4: " << str4 << endl;  
      
    // use strcmp() function to validate the strings are equal  
    if (strcmp (str3, str4) == 0)  
    {  
        cout << " \n Both strings are equal. " << endl;  
    }     
    else   
        cout << " \n The strings are not equal. ";      
          
return 0;  
}  
Output

 String 1:  Welcome to JavaTpoint
 String 2:  Welcome to JavaTpoint

 Both strings are equal.

 String 3:  JavaTpoint
 String 4:  Javatpoint

 The strings are not equal.
/*compare() function
The compare() function is a pre-defined library function of the C++ language. The compare() function
compares two given strings and returns the following results based on the matching cases:

If both the strings are the same, the function returns 0.
If the character value of the first string is smaller than the second string, the function returns < 0.
If the second string is greater than the first string, the function returns greater than 0 or >0.
Syntax

int compare (const string &str) const;   
Let's create a simple program to compare two strings using the compare() function in C++.
*/
//Program2.cpp

#include <iostream>  
using namespace std;  
int main ()  
{  
    string str1, str2; // declare string variable  
      
    cout << " Enter the string 1: ";  
    cin >> str1;   
      
    cout << " Enter the string 2: ";  
    cin >> str2;   
      
    // use compare() function to compare the second string with first string  
      
    int i = str1.compare(str2);  
      
    if ( i < 0)  
    {  
        cout << str1 << " is smaller than " << str2 << " string" << endl;  
    }  
      
    else if ( i > 0)  
    {  
        cout << str2 << " is greater than " << str1 << " string." << endl;  
    }  
    else // i == 0;  
    {  
        cout << " Both strings are equal.";  
    }  
return 0;  
}  
Output


1st Run:
Enter the string 1: Program
 Enter the string 2: program
Program is smaller than program string


2nd Run:
Enter the string 1: APPLE
 Enter the string 2: APPLE
 Both strings are equal.
/*Relational Operator
It is the operator used to compare two strings or numerical values in C++. C++ has different types of 
relational operators such as '==', '!=', >, < operator. But here, we use only two operators 
such as '==' equal to and '!=' not equal to a relational operator to compare the string easily.

Syntax

String1 == string2  // here, we use double equal to operator      
Or   
String1 != string2 // here, we use not equal to operator  
Compare two strings using the Equal to (==) operator in C++
Equal To (==) operator: It is used to check the equality of the first string with the second string.

Let's create a program to compare strings using the double equal to (==) operator in C++.
*/
//Program3.cpp

#include <iostream>  
using namespace std;  
  
int main ()  
{  
    // declare string variables  
    string str1;  
    string str2;  
      
    cout << " Enter the String 1: " << endl;  
    cin >> str1;  
    cout << " Enter the String 2: " << endl;  
    cin >> str2;  
      
    // use '==' equal to operator to check the equality of the string  
    if ( str1 == str2)  
    {  
        cout << " String is equal." << endl;  
    }  
    else  
    {  
        cout << " String is not equal." << endl;  
    }  
    return 0;  
}  
Output

Enter the String 1:
JavaTpoint
 Enter the String 2:
javatpoint
 String is not equal.
2nd Execution:

Enter the String 1:
Program
 Enter the String 2:
Program
 String is equal.
/*Compare two strings using the Not Equal To (!=) Relational Operator
Let's create a program to compare whether the strings are equal or not using the Not Equal To (!=) operator in C++.
*/
//Program4.cpp

#include <iostream>  
using namespace std;  
  
int main ()  
{  
    // declare string variables  
    string str1;  
    string str2;  
      
    cout << " Enter the String 1: " << endl;  
    cin >> str1;  
    cout << " Enter the String 2: " << endl;  
    cin >> str2;  
      
    // use '!=' not equal to operator to check the equality of the string  
    if ( str1 != str2)  
    {  
        cout << " String is not equal." << endl;  
    }  
    else  
    {  
        cout << " String is equal." << endl;  
    }  
    return 0;  
}  
Output

Enter the String 1:
JAVATpoint
 Enter the String 2:
JavaTPOINT
 String is not equal.
2nd Run:

Enter the String 1:
HELLO
 Enter the String 2:
HELLO
 String is equal.
Compare two strings using for loop and if statement in C++

//Program5.cpp

#include <iostream>  
using namespace std;  
int main ()  
{  
    char s1[50], s2[50]; // declare character array  
    int i, disp;  
      
    cout << " Enter the String 1: " << endl;  
    cin >> s1;  
      
    cout << " Enter the String 2: " << endl;  
    cin >> s2;  
      
    for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);  
      
    if (s1[i] < s2[i])  
    {  
        cout << " String 1 is less than String 2";  
    }  
    else if (s1[i] > s2[i])  
    {  
        cout << " String 2 is less than String 1";  
    }  
    else  
    {  
        cout << " String 1 is equal to String 2";  
    }  
    return 0;  
 }  
Output

Enter the String 1:
WELCOME
 Enter the String 2:
WELCOME
 String 1 is equal to String 2
  /*
Compare two strings using the User-defined function in C++
Let's create a simple program to compare the first string with another string using the user-defined function in C++.

Program6.cpp
*/

#include <iostream>  
using namespace std;  
  
void RelationalCompare ( string str1, string str2)  
{  
    // use relational not equal operator  
    if ( str1 != str2)  
    {  
        cout << str1 << " is not equal to " << str2 << " string. " << endl;  
        if (str1 > str2)  
        {  
            cout << str1 << " is greater than " << str2 << " string." << endl;  
        }  
        else  
        {  
            cout << str2 << " is greater than " << str1 << " string." << endl;      
        }  
    }  
        else  
            cout << str1 << " is equal to " << str2 << " string." << endl;  
}  
  
int main ()  
{  
    string str1 ( "JavaT");  
    string str2 ( "Tpoint");  
      
    // call function  
    RelationalCompare (str1, str2);  
      
    string str3 ("JavaTpoint");  
    string str4 ("JavaTpoint");  
    RelationalCompare (str3, str4);  
    return 0;  
}  

Output

JavaT is not equal to Tpoint string.
Tpoint is greater than JavaT string.
JavaTpoint is equal to JavaTpoint string.
