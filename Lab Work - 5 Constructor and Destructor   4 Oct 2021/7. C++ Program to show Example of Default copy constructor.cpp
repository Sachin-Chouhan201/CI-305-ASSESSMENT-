//7. C++ Program to show Example of Default copy constructor

/*

####################################################################################################################################################################
  
What is Class and Objects in C++?
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating instance of that class.
The variables inside class definition are called as data members and the functions are called member functions.
Class is just a blue print, which declares and defines characteristics and behavior, namely data members and member functions respectively. 
And all objects of this class will share these characteristics and behavior.
Objects are instances of class, which holds the data variables declared in class and the member functions work on these class objects.
Each object has different data variables. Objects are initialized using special class functions called Constructors.
It is a type of a copy constructor which is used to initialize the newly created object with the previously created object of a same type is called default copy constructor.
The objects are assigned by using the assignment operator or by giving object as a parameter. It will copy the values of fields.

####################################################################################################################################################################
  
*/
//SOURCE CODE : :
/* C++ Program to show Example of Default copy constructor */

#include<iostream>
#include<string>
using namespace std;

class Book
{
    private:
        int pages;
        char title[3];

    public:
        Book(int q, char w[3])
        {
            pages= q;
            for(int i=0 ; i<3 ; i++)
            {
                title[i]= w[i];
            }
        }

        void show()
        {
            cout<<"\nTitle of Book :: "<<title<<endl;
            cout<<"\nNo. of Pages :: "<<pages<<endl<<endl;
        }
};


int main()
{
    Book b1(25, "C++");
    Book b2(b1);
    Book b3= b1;

    cout<<"\nDetail of b1 :: "<<endl;
    b1.show();
    cout<<"Detail of b2:"<<endl;
    b2.show();
    cout<<"Detail of b3:"<<endl;
    b3.show();

    return 0;
}
//OUTPUT : :
/* C++ Program to show Example of Default copy constructor */
/*

Detail of b1 ::

Title of Book :: C++

No. of Pages :: 25

Detail of b2:

Title of Book :: C++

No. of Pages :: 25

Detail of b3:

Title of Book :: C++

No. of Pages :: 25


Process returned 0
  
*/
