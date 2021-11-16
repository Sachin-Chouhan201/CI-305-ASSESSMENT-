//15. C++ program to find mirrored right triangle star pattern.

#include<iostream>
using namespace std;
class t
{
protected :
int i;
};
class pat:public t
{
protected :
int j,r;
public :
int patern()
{
cout<<"input No of rows : ";
cin>>r;
for(j=1 ; j<=r ; j++)
{
cout<<"\n";
for(i=j ; i<r ; i++)
{
cout<<" ";
}
for(i=1 ; i<=j ; i++)
{
cout<<"*";
}

}
}
};
int main()
{
pat a;
a.patern();
}

/*
input No of rows : 7
      *
     **
    ***
   ****
  *****
 ******
*******

*/
