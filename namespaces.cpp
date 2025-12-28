#include <iostream>

namespace first {
    int x = 1;
}

namespace second { 
    int x = 2;
}

int main() {
    /* 
        A namespace is like a container for names (variables, functions, classes)
        It helps to avoid conflicts when two things have the same name 
    */
    /* 
        using namespace ... allows you to use names from a namespace
        without writing the namespace every time.
        It helps avoid writing NamespaceName:: before each variable or function
    */

    int x = 0;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';


    return 0;
}