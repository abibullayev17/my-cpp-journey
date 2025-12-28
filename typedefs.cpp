#include <iostream>

typedef std::string string_t;
typedef int integer_t;

int main() {
    /* 
        typedef allows you to give a new name to an existing data type
        it is useful to make complex types easier to read and use

        typedef — old way to create a type alias
        using — modern way (C++11+), easier to read
        using supports template aliases
    */

    string_t name = "Azizbek";
    integer_t age = 19;

    std::cout << name << '\n';
    std::cout << age << '\n';

    return 0;
}