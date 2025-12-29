#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() {
    // cout is an insertion operator
    // cin is an extraction operator
    string name;
    int age;

    cout << "What's your name?: ";
    // This only works if user enters only one word. If it's a line
    // Use std::getline(cin, name)
    cin >> name;

    cout << "What's your age?: ";
    cin >> age;

    cout << "Hello, " << name << '\n';
    cout << "You're " << age << " years old" << '\n';

    return 0;
}