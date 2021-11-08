/*
C++ String Reverse
You can reverse a string in C++ either by using available builtin functions or you can write your own logic using looping techniques.
we will go through some of the builtin functions and looping techniques to reverse a string.

C++ String Reverse using reverse()
reverse() is a function in algorithm header file used to reverse a sequence in the given range.

In the following example, we shall include algorithm header file and use reverse() function.
Pass the beginning and ending of the string as arguments to reverse() function as shown in the program. This process reverses the string in-place.

C++ Program
*/

#include <iostream> 
#include <algorithm>  
using namespace std;

int main() {
   string str = "And still, I rise.";
   reverse(str.begin(), str.end());
   cout << str << endl;
}
Output

.esir I ,llits dnA
/*
C++ String Reverse by Swapping Characters
To reverse a string by swapping, you can follow the below steps.

Start.
Take string in variable str.
Initialize variable index with 0.
Check if index is less than half the length of str. If false, go to step 7.
Swap str[index] with str[str length - 1 - index].
Increment index, go to step 4.
Stop.
In the following example, we shall implement the above steps and reverse the string.

C++ Program
*/
#include <iostream> 
using namespace std;

int main() {
   string str = "And still, I rise.";

   char ch;
   for (int index = 0, len = str.length(); index < len/2; index++) {
      ch = str[index];
      str[index] = str[len-1-index];
      str[len-1-index] = ch;
   }

   cout << str << endl;
}
Output

.esir I ,llits dnA

/*
C++ String Reverse by Copying string from Right to Left
To reverse a string by swapping, you can follow the below steps.

Start.
Take string in variable str.
Take character array rev with size of str. This will hold the reversed string.
Initialize variable index with 0.
Check if index is less than the length of str. If false, go to step 8.
Store str[str length - 1 - index] in rev[index].
Increment index, go to step 4.
Stop.
In the following example, we shall implement the above steps and reverse the string.

C++ Program
*/
#include <iostream> 
using namespace std;

int main() {
   string str = "And still, I rise.";
   char rev[str.length()];

   for (int index = 0, len = str.length(); (index < len); index++) {
      rev[index] = str[len-1-index];
   }

   cout << rev << endl;
}
Output

.esir I ,llits dnA

/*C++ String Reverse using Recursion
In the following example, we shall write a recursion function that reveres a given string.

C++ Program
*/
#include <iostream>
using namespace std;

void reverseString(string& str, int n, int i) {
   if (n <= i) {
      return;
   }
   swap(str[i], str[n]);
   reverseString(str, n - 1, i + 1);
}

int main() {
   string str = "And still, I rise.";
   reverseString(str, str.length() - 1, 0);
   cout << str << endl;
}

Output

.esir I ,llits dnA
