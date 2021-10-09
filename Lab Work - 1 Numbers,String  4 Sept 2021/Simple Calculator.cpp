//C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
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
            if(num2==0)
            {  
              cout<<"operation is not Possible Zero Error!!!!!";   
              break;
            }
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
