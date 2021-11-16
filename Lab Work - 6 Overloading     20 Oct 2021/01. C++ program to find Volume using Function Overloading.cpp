//1. C++ program to find Volume using Function Overloading.
/*

################################################################################################################################################################

What is Overloading in C++ ?
C++ allows you to specify more than one definition for a function name or an operator in the same scope, which is called function overloading and operator 
overloading respectively.

Function overloading : :
You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types
and/or the number of arguments in the argument list. You can not overload function declarations that differ only by return type.

Operators overloading : :
You can redefine or overload most of the built-in operators available in C++. Thus a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names the keyword operator followed by the symbol for the operator being defined. Like any other function, 
an overloaded operator has a return type and a parameter list.

################################################################################################################################################################

*/
//SOURCE CODE : :
/* C++ program to find Volume using Function Overloading  */    

    #include<iostream>
    using namespace std;
    float vol(int,int);
    float vol(float);
    int vol(int);
     
    int main()
    {
        int r,h,a;
        float r1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter side of cube:";
        cin>>a;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Volume of cylinder is "<<vol(r,h);
        cout<<"\nVolume of cube is "<<vol(a);
        cout<<"\nVolume of sphere is "<<vol(r1);
        return 0;
    }
    float vol(int r,int h)
    {
        return(3.14*r*r*h);
    }
    float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    int vol(int a)
    {
        return(a*a*a);
    }

//OUTPUT : :
/* C++ program to find Volume using Function Overloading */
/*
Enter radius and height of a cylinder: 8 12
Enter side of cube: 2
Enter radius of sphere: 3

Volume of cylinder is 2411.52
Volume of cube is 8
Volume of sphere is 113.04
*/
