/* “Write a Program for use of predefined sizeof() function to display the data type” */
#include <iostream>
using namespace std;

int main()
{
	cout << "Size of char " << sizeof(char)<<endl;
	cout << "Size of Int "<< sizeof(int)<<endl;
	cout << "Size of Float " << sizeof(float)<<endl;
	cout << "Size of Double " << sizeof(double)<<endl;
	cout << "Size of Long " << sizeof(long)<<endl;
	int a = 0,arr[10];
	cout << "Size of Array " << sizeof(arr)<<endl;
    double d = 10.21;
    cout<< "Size of variable a " <<sizeof(a)<<endl;;
    cout<< "Size of an expression " <<sizeof(a+d)<<endl;
    int s = (int)(a+d);
    cout<< "Size of explicitly converted expression " <<sizeof(s)<<endl;
    cout << sizeof(a + d);
	return 0;
}
/*
Output:-

Size of char 1
Size of Int 4
Size of Float 4
Size of Double8
Size of Long8
Size of Array40
Size of variable a 4
Size of an expression 8
Size of explicitly converted expression 4
8


*/
