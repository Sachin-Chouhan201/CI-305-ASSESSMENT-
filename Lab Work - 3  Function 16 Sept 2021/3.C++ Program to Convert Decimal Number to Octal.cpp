//C++ Program to Convert Decimal Number to Octal

/*
In a computer system, the octal number is expressed in the octal numeral system while the decimal number is in the decimal numeral system.
The octal number is in base 8 while the decimal number is in base 10.

Examples of decimal numbers and their corresponding octal numbers are as follows.

Decimal Number	Octal Number
8	      10
70	    106
25	    31
7	      7
A program that converts the decimal numbers into octal is as follows.

*/  

#include <iostream>
using namespace std;
void DecimalToOctal(int decimalNum) {
   int octalNum = 0, placeValue = 1;
   int dNo = decimalNum;
   while (decimalNum != 0) {
      octalNum += (decimalNum % 8) * placeValue;
      decimalNum /= 8;
      placeValue *= 10;
   }
   cout<<"Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;
}
int main() {
   DecimalToOctal(70);
   return 0;
}

/*
Output
Octal form of decimal number 70 is 106
In the above program, the function DecimalToOctal convert the decimal numbers into octal.In the function DecimalToOctal, 
initially the variable octalNum is initialized to zero. The variable placeValue denotes the location of the digit in the number.
  The value of octalNum is found using a while loop.

For each iteration of the while loop, the decimalNum is divided by 8 and the remainder is multiplied by placeValue. 
  This is added to the previous value of octalNum. Also decimalNum is divided by 8 and the quotient is stored back. placeValue is multiplied by 10.

A code snippet that demonstrates this is as follows.
*/

while (decimalNum != 0) {
   octalNum += (decimalNum % 8) * placeValue;
   decimalNum /= 8;
   placeValue *= 10;
}

//After the Octal value i.e. octalNum is ovbtained, it is displayed. This is given below −

cout<<"Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;

/*
The main() function only contains the function call to DecimalToOctal() with the required values. This is demonstrated by the following code snippet.

DecimalToOctal(70);
*/
