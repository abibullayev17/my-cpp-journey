#include <iostream>
using std::cout;
using std::cin;

int main() {
    // && - checks if two conditions are true
    // || - checks if at least one of two conditions is true
    // ! - reverses the logical state of its operand
    int temperature;
    bool dislike;

    cout << "Enter the temperature in your city: ";
    cin >> temperature;

    if (temperature > 0 && temperature < 15) {
        dislike = false;
        cout << "It's fine " << dislike << '\n';
    } else { 
        dislike = true;
        cout << "I don't like it" << dislike << '\n';
    }

    if (temperature < 0 || temperature > 15) {
        cout << "I don't like it" << '\n';
    } else {
        cout << "I like it" << '\n';
    }

    cout << !dislike;

    return 0;
}