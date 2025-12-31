#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() {
    // while loop - repeats the same action if a condition is true.
    // do ... while - does something first, and then checks a condition

    string name;

    while(name.empty()) {
        cout << "Enter your name: ";
        std::getline(cin, name);
    }

    cout << "Hello, " << name << '\n';

    do {
        cout << "hello, world";
    } while (1 > 2);

    return 0;
}