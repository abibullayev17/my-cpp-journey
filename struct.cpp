#include <iostream>

struct student {
    std::string name;
    double gpa; 
    bool enrolled;
};

int main() {
    // struct = A structure that groups related variables under one name
    // structs can contain many differnet data types (string, int, double, etc.)
    // variables in a struct are know as "members"
    // members can be accessed with "Class Member Access Operator"

    student student1;
    student1.name = "Azizbek";
    student1.gpa = 5.0;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    return 0;
}