#include <iostream>
using std::cout;

int main() {
    // for loop - repeats the same action until the condition is true
    // break - stops the whole loop
    // continue - stops the current iteration

    for (int i = 1; i <= 3; i++) 
        cout << "Happy 2026!" << '\n';
    
    for (int i = 1; i < 20; i++) {
        if (i == 13) {
            break;
        }

        cout << i << '\n';
    }

    for (int i = 1; i < 20; i++) {
        if (i == 13) {
            continue;
        }

        cout << i << '\n';
    }

    return 0;
}