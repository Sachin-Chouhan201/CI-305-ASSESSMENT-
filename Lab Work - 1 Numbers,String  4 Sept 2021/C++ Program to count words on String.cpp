/*
Count words in a given string in C++

We are given with a sentence or string containing words that can contain spaces, new line characters and tab characters in between. 
The task is to calculate the total number of words in a string and print the result.

Input − string str = “welcome to\n tutorials point\t”

Output − Count of words in a string are − 4

Explanation − There are four words in a string i.e. welcome, to, tutorials, point and the rest are spaces(“ ”),
next line character(\n) and tab character(\t) present between the words.

Input − string str = “\nhonesty\t is the best policy”

Output − Count of words in a string are − 5

Explanation − There are four words in a string i.e. honesty, is, the, best, policy and the rest are spaces(“ ”),
next line character(\n) and tab character(\t) present between the words.

Approach used in the below program is as follows
There can be multiple solutions for this. So let’s first look at the simpler approach we had used in the below code −

Create an array of char type for storing the string let’s say, str[]

Declare two temporary variable one is count to count the number of words in a string and temp to perform the flag operations

Start loop While str is not null

Inside the loop, check IF *str = space OR *str = next line OR *str = tab then set temp to 0

Else If temp = 0 then set temp to 1 and increment the value of count by 1

Increment the str pointer by 1

Return the value in count

Print the result

Example
*/
#include
using namespace std;
//count words in a given string
int total_words(char *str){
   int count = 0;
   int temp = 0;
   while (*str){
      if (*str == ' ' || *str == '\n' || *str == '\t'){
         temp = 0;
      }
      else if(temp == 0){
         temp = 1;
         count++;
      }
      ++str;
   }
   return count;
}
int main(){
   char str[] = "welcome to\n tutorials point\t";
   cout<<"Count of words in a string are: "<<total_words(str);
   return 0;
}
Output
If we run the above code it will generate the following output −

Count of words in a string are: 4
