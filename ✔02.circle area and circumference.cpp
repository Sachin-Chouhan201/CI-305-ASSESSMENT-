/* “Write a Program for Calculate Area and Perimeter of the Circle”  */
#include <iostream>
#include <iomanip> 
using namespace std;
#define PI 3.1416
int main() {
    double radius, perimeter, area;

    cout<<"Enter the radius: ";
    cin>>radius;

    perimeter = 2*PI*radius;
    area = PI*radius*radius;

    cout<<"The perimeter is: "<<setprecision(2)<<perimeter<<endl;
    cout<<"The area is: "<<setprecision(2)<<area<<endl;;

    return 0;
}
/*
output:-


Enter the radius: 2
The perimeter is: 13
The area is: 13

*/
