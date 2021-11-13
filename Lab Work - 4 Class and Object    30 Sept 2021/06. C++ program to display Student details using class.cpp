//6. C++ program to display Student details using class

Write a C++ program to display Student details using classes

#include<iostream>
using namespace std;
class student
{
        private:
                
                        char name[20],regd[10],branch[10];
                        int sem;
        public:
                void input();
                void display();
                        
                
};
void student::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Regdno.:";
        cin>>regd;
        cout<<"Enter Branch:";
        cin>>branch;
        cout<<"Enter Sem:";
        cin>>sem;
}
void student::display()
{
        cout<<"\nName:"<<name;
        cout<<"\nRegdno.:"<<regd;
        cout<<"\nBranch:"<<branch;
        cout<<"\nSem:"<<sem;
}
int main()
{
        student s;
        s.input();
        s.display();
}
 
/*

OUTPUT ::

Enter Name:codezclub
Enter Regdno.:1
Enter Branch:ECE
Enter Sem:2

Name:codezclub
Regdno.:1
Branch:ECE
Sem:2

*/
