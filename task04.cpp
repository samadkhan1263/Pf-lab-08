#include <iostream>
using namespace std;

int main() {
    char grade;

   
    cout << "Enter a letter grade (A, B, C, D, or F): ";
    cin >> grade;

    grade = toupper(grade);

    
    switch (grade) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Average" << endl;
            break;
        case 'D':
            cout << "Below Average" << endl;
            break;
        case 'F':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Enter a valid grade." << endl;
            break;
    }

    return 0;
}
