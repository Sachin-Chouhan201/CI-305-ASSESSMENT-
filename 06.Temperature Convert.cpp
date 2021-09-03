/*“Write a Program for Convert Temperature from Celsius to Fahrenheit and Fahrenheit to Celsius”*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  
    float fh,cl;
    int choice; 
    cout<<"\n1: Convert temperature from Fahrenheit to Celsius."; 
    cout<<"\n2: Convert temperature from Celsius to Fahrenheit.";
    cout<<"\nEnter your choice (1, 2): ";
    cin>>choice;
    if(choice ==1)
    {
        cout<<"\nEnter temperature in Fahrenheit: ";
        cin>>fh;
        cl= (fh - 32) / 1.8;
        cout<<"Temperature in Celsius: "<<setprecision(5)<<cl;
    }
    else if(choice==2)
    {
        cout<<"\nEnter temperature in Celsius: ";
        cin>>cl;
        fh= (cl*1.8)+32;
        cout<<"Temperature in Fahrenheit: "<< setprecision(5)<<fh;
    }
    else
    {
        cout<<"\nInvalid Choice !!!";
    }
    return 0;
}

/*
I/P :-
1 45
OUTPUT:-

1: Convert temperature from Fahrenheit to Celsius.
2: Convert temperature from Celsius to Fahrenheit.
Enter your choice (1, 2):   1
Enter temperature in Fahrenheit:   45
Temperature in Celsius: 7.2222

*/
