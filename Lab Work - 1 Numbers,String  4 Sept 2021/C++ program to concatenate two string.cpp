/*
A string is a one dimensional character array that is terminated by a null character. Concatenation of two strings is the joining of them to form a new string.
For example.

String 1: Mangoes are
String 2: tasty
Concatenation of 2 strings: Mangoes are tasty
A program to concatenate two strings is given as follows.

Example
 Live Demo
*/
#include <iostream>
using namespace std;
int main() {
   char str1[100] = "Hi...";
   char str2[100] = "How are you";
   int i,j;
   cout<<"String 1: "<<str1<<endl;
   cout<<"String 2: "<<str2<<endl;
   for(i = 0; str1[i] != '\0'; ++i);
   j=0;
   while(str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
   }
   str1[i] = '\0';
   cout<<"String after concatenation: "<<str1;
   return 0;
}

Output
String 1: Hi...
String 2: How are you
String after concatenation: Hi...How are you
/*
In the above program, there are two strings str1 and str2. A for loop is used to reach the end of str1. 
At the end of the for loop, i contains the index of the null value in the str1. The following code snippet demonstrates this.

for(i = 0; str1[i] != '\0'; ++i);
A while loop is used to transfer the value of str2 to str1. Variable j starts from 0 and copies the character in str2 into str1 at the position pointed by i.
This loop runs till value of str2[j] is not null. This is demonstrated as follows.

j=0;
while(str2[j] != '\0') {
   str1[i] = str2[j];
   i++;
   j++;
}
After the strings are concatenated in str1, null is added to the end. Then the concatenated string is displayed. The code snippet for this is as follows −

str1[i] = '\0';
cout<<"String after concatenation: "<<str1;
*/
