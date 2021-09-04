/*
“Program for input choice from user for calculating the Area, Perimeter and Diagonal of rectangle and
display it on to the screen according to user’s response”
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
      int length,breath,choice=0;
      cout<<"Enter 1 For Area of Rectangle \n";
      cout<<"Enter 2 For Perimeter of Rectangle \n";
      cout<<"Enter 3 For Diagonal of Rectangle \n";
      cout<<"Please Enter Your Choice: \n";
      cin>>choice;
      cout<<"\nEnter Length and Breath of Rectangle: ";
      cin>>length>>breath;
      switch(choice) 
      {
        case 1:
           cout<<"\nArea of Ractangle: "<<length*breath<<endl;
           break;
        case 2:
           cout<<"\nDiagonal of Ractangle: "<<sqrt(((length*length)+(breath*breath)))<<endl;
           break;
        case 3:
          cout<<"\nParameters of Rectangle: "<<2*(length+breath)<<endl;
          break;
       default:
          cout<<"Please Enter A Valid Choice. "<<endl;      
     }
return 0;
}


/*

I/P:-
1
12
14

OUTPUT:-
Enter 1 For Area of Rectangle 
Enter 2 For Perimeter of Rectangle 
Enter 3 For Diagonal of Rectangle 
Please Enter Your Choice :  1

Enter Length and Breath of Rectangle: 12 14  
Area of Ractangle: 168

*/
