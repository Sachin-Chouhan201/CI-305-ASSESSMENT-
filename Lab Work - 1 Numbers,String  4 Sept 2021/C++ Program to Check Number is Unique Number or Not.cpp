/*
Check Number is Unique Number or Not
Write a C++ Program to Check Number is Unique Number or Not. Here’s simple C++ Program to Check Number is Unique Number or Not in C++ Programming Language.

Numbers in C++
Normally, when we work with Numbers, we use primitive data types such as int, short, long, float and double, etc. The number data types, their possible values and number ranges have been explained while discussing C++ Data Types.

 
A unique number is a number in which no digit is repeated. For example: 25712 is not a unique number as 2 is repeated twice while 4512 is a unique number.

So in this article I am sharing the C++ program that check if a number is unique or not.

Here is source code of the C++ Program to Check Number is Unique Number or Not. The C++ program is successfully compiled and run(on Codeblocks) on a Windows system. The program output is also shown in below.

*/
//SOURCE CODE : :
/*  C++ Program to Check Number is Unique Number or Not  */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    long num;
    char str[10];
    int a[10]={0},flag=1,i=0;

    cout<<"Enter any number :: ";
    cin>>num;
    itoa(num,str,10);    //convert number to character array

    while(str[i]!='\0')
    {
        switch(str[i])
        {
            case '0':
                        a[0]++;
                        break;
            case '1':
                        a[1]++;
                        break;
            case '2':
                        a[2]++;
                        break;
            case '3':
                        a[3]++;
                        break;
            case '4':
                        a[4]++;
                        break;
            case '5':
                        a[5]++;
                        break;
            case '6':
                        a[6]++;
                        break;
            case '7':
                        a[7]++;
                        break;
            case '8':
                        a[8]++;
                        break;
            case '9':
                        a[9]++;
                        break;
        }
        i++;
    }

    for(i=0;i<10;i++)
    {
        if(a[i]>1)
        {
            flag=0;
            break;
        }
    }

    if(flag)
        cout<<"\nNumber is Unique.\n";
    else
        cout<<"\nNumber is Not Unique.\n";

    return 0;
}


//Output : :
/*  C++ Program to Check Number is Unique Number or Not  */
/*
Enter any number :: 12345

Number is Unique.

Process returned 0
*/
