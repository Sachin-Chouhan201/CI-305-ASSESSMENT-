//12. C++ Program To Calculate Electricity Bill Of Person using Class

/*

#########################################################################################################################################

Algorithm for Calculating Electricity Bill : :
To Calculate Electricity Bill Of Person using Class,first we have to create and call  get( ) function to take input details of the customer.
After get( ) , we create and call a new function i.e  calc_bill( ) to calculate the total bill of the customer on the behalf of units consumed by the customer .
At last , we call the put( ) function to print or display customer or person electricity bill on the screen.
Here are some tarrifs set per unit consumption of electricity to the customer.
  
#########################################################################################################################################

Unit tarrif  :
100 RS. 1.20 per unit
200 RS. 2 per unit
300 RS. 3 per unit

#########################################################################################################################################

SOURCE CODE : :

//  C++ Program to Calculate Electricity Bill Of Person using Class
*/

#include<iostream>
using namespace std;

class e_bill
{
     private:
         int c_no;
         char c_name[20];
         int units;
         double bill;
     public:
        void get()
        {
                 cout<<"Enter Details of Customer Below :: \n" <<endl;
                 cout<<"Enter Customer No. :: ";
                 cin>>c_no;
                 cout<<"\nEnter Customer Name :: ";
                 cin>>c_name;
                 cout<<"\nEnter No. of Units used :: ";
                 cin>>units;
         }

        void put()
         {
                cout<<"\nEntered Details of Customer are :: " <<endl;
                cout<<"\nCustomer No. is : "<<c_no;
                cout<<"\n\nCustomer Name is : "<<c_name;
                cout<<"\n\nNumber of Units Consumed : "<<units;
                cout<<"\n\nBill of Customer : "<<bill;
         }

        void calc_bill()
        {
                if(units<=100)
                       bill=units*1.20;
               else if(units<=300)
                       bill=100*1.20+(units-100)*2;
               else
                       bill=100*1.20+200*2+(units-300)*3;
         }
};

int main()
{
    e_bill b1;
    b1.get();
    b1.calc_bill();
    b1.put();

    cout<<"\n";

    return 0;
}

//OUTPUT : :
/* C++ Program to Calculate Electricity Bill Of Person using Class  */
/*
Enter Details of Customer Below ::

Enter Customer No. :: 123

Enter Customer Name :: CodezClub

Enter No. of Units used :: 2000

Entered Details of Customer are ::

Customer No. is : 123

Customer Name is : CodezClub

Number of Units Consumed : 2000

Bill of Customer : 5620

Process returned 0
  
*/
