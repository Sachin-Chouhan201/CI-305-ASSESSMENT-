/*The program is very simple. We are going to make a class named Calculator to perform simple arithmetic operations like addition, subtraction, multiplication, and division.

The Calculator class contains 2 private variables of type double – A and B. A and B store the numbers on which we are required to perform the operation.

The Calculator class contains 5 public member functions.

set(): This function is used to input 2 numbers. The numbers are stored in private variables A and B.
add(): This function returns A + B.
sub(): This function returns A – B.
mul(): This function returns A * B.
div(): This function returns A / B. It also checks if B is 0 or not.
The program is menu driven.
*/
#include <iostream>
#include <math.h>
using namespace std;
class Calculator {
    double A, B;
public:
    void get() {
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
        cin >> B;
    }
    double add() {
        return A + B;
    }
    double sub() {
        return A - B;
    }
    double mul() {
        return A * B;
    }
    double div() {
        if (B == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return A / B;
        }
    }
};
int main() {
    int choice;
    Calculator cal; // simple calculator object
    cout << "Enter 1 Add 2 Numbers"
        << "\nEnter 2 Subtract 2 Numbers"
        << "\nEnter 3 Multiply 2 Numbers"
        << "\nEnter 4 Divide 2 Numbers"
        << "\nEnter 0 To Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cal.get();
            cout << "Result: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "Result: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}
/*
Output

Enter 1 Add 2 Numbers
Enter 2 Subtract 2 Numbers
Enter 3 Multiply 2 Numbers
Enter 4 Divide 2 Numbers
Enter 0 To Exit

Enter Choice: 1
Enter First Number: 54
Enter Second Number: 45
Result: 99

Enter Choice: 2
Enter First Number: 100
Enter Second Number: 30
Result: 70

Enter Choice: 3
Enter First Number: 4
Enter Second Number: 5
Result: 20

Enter Choice: 4
Enter First Number: 100
Enter Second Number: 25
Result: 4

Enter Choice: 0
*/
