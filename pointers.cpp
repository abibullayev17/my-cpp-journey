#include <iostream> 
using std::cout;
using std::string;

int main() {
    // pointers = variable that stores a memory address of another variable
    // sometimes it's easier to work with an address
    // & address-of operator
    // * deference operator

    string name = "Azizbek";
    string* pname = &name;



    cout << *pname;

    return 0;
}