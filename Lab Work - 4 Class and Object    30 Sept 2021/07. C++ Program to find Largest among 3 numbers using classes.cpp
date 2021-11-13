//7. C++ Program to find Largest among 3 numbers using classes

/*  C++ Program to find Largest of three Numbers using class */

#include<iostream>
using namespace std;

class largest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"\nEnter 1st number :: ";
                cin>>x;
                cout<<"\nEnter 2nd number :: ";
                cin>>y;
                cout<<"\nEnter 3rd number :: ";
                cin>>z;
        }

        void calc()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);

                cout<<"\nThe Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<"\n";
        }
};

int main()
{
        largest g;
        g.input();
        g.calc();

        return 0;
}

/*
OUTPUT : :
//  C++ Program to find Largest of three Numbers using class 

Enter 1st number :: 7

Enter 2nd number :: 2

Enter 3rd number :: 8

The Largest Number among [ 7, 2, 8 ] = 8

Process returned 0
  
  */
