#include <iostream>
using namespace std;

int main() {
    int balance = 0.0; 
    int choice;
    int amount;

    
    cout << "         Simple Bank System         " << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Please choose an option (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: 
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            break;

        case 2: 
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
            break;

        case 3: 
            cout << "Your current balance is: $" << balance << endl;
            break;

        case 4: 
            cout << "Exiting the program. Thank you!" << endl;
            break;

        default: 
            cout << "Invalid option. Please enter 1, 2, 3, or 4." << endl;
            break;
    }

    return 0;
}
