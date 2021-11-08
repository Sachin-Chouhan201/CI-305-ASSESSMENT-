/*
C++ String copy()
This function copies the contents of one string into another string.

Syntax
Suppose str1 and str2 are two string objects, len is the length of substring. We want to copy string str1 into the string object str2 then the syntax would look like:

str1.copy(str2,len);  
str1.copy(str2,len,pos);  
Parameter
str2: str2 is the destination string object which retains the copied string.

len: It defines the length of substring.

pos: It determines the position of first character to include.

Return value
It returns the number of characters to be copied.

Example 1
Let's see a simple example of copying the string into another string object.
*/
#include<iostream>  
using namespace std;  
int main()  
{  
string source = "javatpoint tutorial";  
char destination[20];  
cout<<"source string is : "<<source<<'\n';  
source.copy(destination,sizeof source);   
cout<<"destination string is :"<<destination;  
return 0;  
}   
Output:

/*
source string is: javatpoint tutorial
destination string is: javatpoint tutorial 
In this example, source string contains the value "javatpoint tutorial"
and we copy the source string to the destination string using copy function.

Example 2
Let's see a simple example of copying the string when position is passed in a parameter.
*/
#include<iostream>  
using namespace std;  
int main()  
{  
string str = "java programs";  
char str1[13] ;  
str.copy(str1,8,5);  
str1[8] ='\0';  
cout<<"String contains : " <<str1;  
return 0;   
}   
Output:

String contains: programs
/*
In this example, we copy the substring of string str i.e. programs to the string str1 using copy function.

Example 3
Let's see a simple example of copying the array of integers in vector
*/
#include<iostream>  
#include<vector>  
using namespace std;   
int main()  
{  
int a[5]={1,2,3,4,5};  
vector<int> v1(5);  
copy(a,a+5,v1.begin());  
for(int i=0;i<v1.size();i++)  
{  
    cout<<v1[i];  
}  
return 0;   
}  
Output:

12345
  
//In this example, we copy the array of integers to the vector using copy function.
