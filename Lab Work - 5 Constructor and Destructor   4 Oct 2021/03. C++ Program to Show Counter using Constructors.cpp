//3. C++ Program to Show Counter using Constructors

/*
##########################################################################################################################################

What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively.
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.

##########################################################################################################################################
  
*/
  
//SOURCE CODE : :
/* C++ Program to Show Counter using Constructor  */

#include<iostream>
using namespace std;

class counter
{
    private:
        int count;
    public:
        counter ()        // constructor
        {
            count=0;
        }

        void inc_count ()
        {
            count++;
        }

        int get_count ()
        {
            return count;
        }
};

int main ()
{
    counter c1;
    cout<<"\nBefore calling Counter Function, Count = ";
    cout<<c1.get_count ();

    c1.inc_count ();
    cout<<"\n\nAfter calling Counter Function, Count = ";
    cout<<c1.get_count ();

    cout<<"\n";

    return 0;
}
//OUTPUT : :
/* C++ Program to Show Counter using Constructor  */
/*
Before calling Counter Function, Count = 0

After calling Counter Function, Count = 1

Process returned 0
  
  */
