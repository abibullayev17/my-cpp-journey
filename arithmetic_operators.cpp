#include <iostream>
using namespace std;

int main() {
    /*
     arithmetic operators return the result of a specific 
     arithmetic operation (+, -, /, *)
    */

    int workers = 19;
    workers += 1; // => workers = workers + 1; works with all arithmetic operators

    cout << workers << '\n';

    int teachers = 20;
    teachers++; // => teachers += 1; we can also use teachers-- which means teachers -= 1;

    cout << teachers << '\n';

    // % -> returns the remainder

    int students = 20;
    cout << students % 3 << '\n';

    /* 
        In C++, arithmetic operator precedence is as follows: 
        1) Parentheses ()
        2) Multiplication (*) and devision (/)
        3) Addition (+) and subtraction (-)
    */

    return 0;
}