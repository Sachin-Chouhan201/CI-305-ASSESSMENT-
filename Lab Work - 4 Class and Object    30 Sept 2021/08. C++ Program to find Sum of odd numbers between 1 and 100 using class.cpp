//8. C++ Program to find Sum of odd numbers between 1 and 100 using class

#include<iostream>
using namespace std;
class sum
{
   private:
        int n,s=0;
        public:
          void calc();
                void display();
                
};
void sum::calc()
{
        for(n=1;n<=100;n+=2)
        s=s+n;
        
}
void sum::display()
{
        cout<<"Sum of all odd numbers between 1-100:"<<s;
}
int main()
{
        sum s;
        s.calc();
        s.display();
        
}

/*

OUTPUT-

Sum of all odd numbers between 1-100: 2500

*/