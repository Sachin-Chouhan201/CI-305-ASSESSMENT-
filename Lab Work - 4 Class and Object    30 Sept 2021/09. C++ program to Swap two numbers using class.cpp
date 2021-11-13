//9. C++ program to Swap two numbers using class

#include<iostream>

using namespace std;

class swap
{
int a,b;
public:
void getdata();
void swapv();
void display();
};

void swap::getdata()
{
cout<<“Enter two numbers:”;
cin>>a>>b;
}

void swap::swapv()
{
a=a+b;
b=a-b;
a=a-b;
}

void swap::display()
{
cout<<“a=”<<a<<“\tb=”<<b;
}

int main()
{

swap s;

s.getdata();
cout<<“\nBefore swap: \n”;
s.display();

s.swapv();
cout<<“\nAfter swap:\ n”;
s.display();

return 0;
}

/*

OUTPUT ::

Enter two numbers:
21
45
Before swap:
a=21    b=45
After swap:
a=45    b=21

*/
