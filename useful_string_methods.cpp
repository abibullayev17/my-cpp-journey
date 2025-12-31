#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() { 
    // String methods help to manipulate strings (modify, search, compare, etc.)
    // length() returns the number of characters
    // empty() returns true if a string is empty, if not, returns false
    // clear() removes all characters from the string
    // append() adds a string to the end of another string
    // at() returns the character at the specified index (with bounds checking)
    // insert() inserts characters or a string at the specified position
    // erase() removes characters from the string 

    string name;

    cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) {
        cout << "Your name can't be over 12 characters";
    } else { 
        cout << "Welcome " << name << '\n';
    }

    if (name.empty()) {
        cout << "You didn't enter your name";
    } else {
        cout << "Hello, " << name << '\n';
    }

    cout << name.at(1) << '\n';

    cout << name.append("hi") << '\n';

    cout << name.insert(0, "wassup bro") << '\n';

    cout << name.erase(0, 10) << '\n';

    name.clear();

    cout << "Hi!" << name << '\n';

    return 0;
}