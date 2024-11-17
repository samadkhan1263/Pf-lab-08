#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    
    switch (op) 
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
           
            cout << num1 << " / " << num2 << " = " << (num1 / num2)  << endl;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}
