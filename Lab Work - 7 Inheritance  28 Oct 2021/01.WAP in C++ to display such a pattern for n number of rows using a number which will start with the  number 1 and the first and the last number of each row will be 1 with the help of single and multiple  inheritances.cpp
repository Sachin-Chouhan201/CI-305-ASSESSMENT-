/*
WAP in C++ to display such a pattern for n number of rows using a number which will start with the 
number 1 and the first and the last number of each row will be 1 with the help of single and multiple 
inheritances
*/
#include<iostream>
using namespace std;
class parent
{
protected:
int i,j,k,l,n;
};
class child:public parent
{
public:
int show()
{
cout<<"num of rows:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"\n";
for(l=1;l<=n-i;l++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<j;
}
for(k=i-1;k>=1;k--)
{
cout<<k;
} 
cout<<endl;
}
}
};
int main()
{
child obj;
obj.show();
}
/*
//OUTPUT
num of rows: 10
         1
        121
       12321
      1234321
     123454321
    12345654321
   1234567654321
  123456787654321
 12345678987654321
12345678910987654321


*/


/* WAP to implement Multiple Inheritance C++ */
#include<iostream>
using namespace std;
class A
{
protected:
int i,j,k,l;
};
class B
{
protected:
int n;
};
class C:public A,public B
{
public:
int show()
{
cout<<"num of rows:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<endl;
for(l=1;l<=n-i;l++)
{
cout<<" ";
}
for(j=1;j<=i;j++)
{
cout<<j;
}
for(k=i-1;k>=1;k--)
{
cout<<k;
}
}
}		      
};
int main()
{
C obj;
obj.show();
}


//OUTPUT-
/*
num of rows:
         1
        121
       12321
      1234321
     123454321
    12345654321
   1234567654321
  123456787654321
 12345678987654321
12345678910987654321
*/
