#include <iostream>
using namespace std;

int main() {
    char color;

    // Ask the user to enter a traffic light color
    cout << "Enter a traffic light color (R for Red, G for Green, Y for Yellow): ";
    cin >> color;

    switch (color) {
        case 'R':
       
            cout << "Stop" << endl;
            break;
        case 'G':
       
            cout << "Go" << endl;
            break;
        case 'Y':
       
            cout << "Slow down" << endl;
            break;
        default:
            cout << "Invalid color." << endl;
            break;
    }

    return 0;
}
