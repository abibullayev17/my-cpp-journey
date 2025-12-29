#include <iostream>
using std::cout;
using std::cin;

int main() {
    // switch executes code based on the value of a variable

    int day;

    cout << "Enter the number of the day (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid number";
    }

    return 0;
}