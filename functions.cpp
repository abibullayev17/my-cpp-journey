#include <iostream>
using std::cout;
using std::string;

void happyBirthday(string name) {
    cout << "Happy birthday! " << name << '\n';
}

int main() {
    // function = a block of reusable code
    // we can declare a function first and assign some actions later

    happyBirthday("John");
    happyBirthday("Mike");

    return 0;
}