#include <iostream>
using std::cout;

int main() {
    /* 
        Type conversion in C++ is when one data type is converted to another.
        There are two types of type conversion in C++:
        1) Implicit conversion — happens automatically
        2) Explicit conversion — done by the programmer
    */

    /*
    int pi = 3.14;

    cout << pi; // => 3 => implicit

    */
    double pi = (int) 3.14; // => explicit
    cout << pi << '\n';
    
    return 0;
}