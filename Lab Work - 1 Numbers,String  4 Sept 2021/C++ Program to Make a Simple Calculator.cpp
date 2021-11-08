/* 
To understand this example, you should have the knowledge of the following C++ programming topics:

C++ switch..case Statement
C++ break Statement
C++ continue Statement
This program takes an arithmetic operator (+, -, *, /) and two operands from a user and performs the operation on 
those two operands depending upon the operator entered by the user.

Example: Simple Calculator using switch statement
*/
# include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
/*
Output

Enter operator either + or - or * or divide : -
Enter two operands: 3.4 8.4
3.4 - 8.4 = -5.0

This program takes an operator and two operands from the user.

The operator is stored in variable op and two operands are stored in num1 and num2 respectively.

Then, switch...case statement is used for checking the operator entered by user.

If user enters + then, statements for case: '+' is executed and program is terminated.

If user enters - then, statements for case: '-' is executed and program is terminated.

This program works similarly for * and / operator. But, if the operator doesn't matches any of the four character [ +, -, * and / ], 
default statement is executed which displays error message.
*/
