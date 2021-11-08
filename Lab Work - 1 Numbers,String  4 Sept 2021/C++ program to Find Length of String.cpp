// 5 Different methods to find the length of a string in C++?
/*  

A sequence of characters or a linear array of character is known as String. Its declaration is same as define other arrays.

Length of array is the number of characters in the String. There are many in-built method and other methods to find the length of string. 
Here, we are discussing 5 different methods to find the length of a string in C++.
*/
//1) Using the strlen() method of C − This function returns an integer value of the C. For this you need to pass the string in the form of character array.
//PROGRAM TO ILLUSTRATE THE USE OF strlen() METHOD

#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char charr[] = "I Love Tutorialspoint";
   int length = strlen(charr);
   cout << "the length of the character array is " << length;
   return 0;
}
/*
Output
the length of the character array is 21
*/
//2) Using the size() method of c++ − It is included in the string library of C++. The return an integer value of the number of characters in the string.
//PROGRAM TO ILLUSTRATE THE USE OF size() METHOD
#include <iostream>
#include <string>
using namespace std;
int main() {
   string str = "I love tutorialspoint";
   int length = str.size();
   cout << "the length of the string is " << length;
   return 0;
}

/*
Output
The length of the string is 21
*/

//3) Using the for loop − This method does not require any function. It loops through the array and counts the number of elements in it.
//The loop runs until the ‘/0’ is encountered.
//PROGRAM TO FIND THE LENGTH USING THE FOR LOOP
#include <iostream>
#include <string>
using namespace std;
int main() {
   string str = "I love tutorialspoint";
   int i;
   for(i=0; str[i]!='\0'; i++){ }
      cout << "the length of the string is " << i;
   return 0;
}
/*
Output
The length of the string is 21
*/

//4) Using the length() method − In C++ their is a method length() in the string library that returns the number of characters in the string.
//PROGRAM TO FIND THE NUMBER OF CHARACTERS IN STRING USING length() method
#include <iostream>
#include <string>
using namespace std;
int main() {
   string str = "I love tutorialspoint";
   int length = str.length();
   cout << "the length of the string is " << length;
      return 0;
}
/*
Output
The length of the string is 21
*/

//5) Finding length of string using the while loop − You can count the number of characters in a string using the while loop also.
//To count the number of characters, you have to use a counter in the while loop and specify the end condition as != ‘\0’ for the string.
//PROGRAM TO FIND THE LENGTH OF STRING USING WHILE LOOP

#include <iostream>
#include <string>
using namespace std;
int main() {
   string str = "I love tutorialspoint";
   int length = 0;
   while(str[length] !='\0' ){
      length++;
   }
   cout<<"The length of the string is "<< length;
   return 0;
}
/*
Output
The length of the string is 21
*/
