#include <iostream>

int main() {
    // Variable is a box to store data

    /* 
        There are two ways to create a variable:
        1) Declare the variable and assing a value later. 
        Example: 
        int x;
        x = 5;

        2) Declare and assign a value at the same time.
        Example:
        int x = 5;
    */

    // integer (whole number)
    int age = 19;
    int year = 2025;
    int days = 7;

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';

    // double (number including decimal)
    double price = 10.99;
    double GPA = 4.0;
    double temperature = 1.5;

    std::cout << price << '\n';
    std::cout << GPA << '\n';
    std::cout << temperature << '\n';

    // char (single character)
    char grade = 'A';
    char sex = 'M';

    std::cout << grade << '\n';
    std::cout << sex << '\n';
    
    // boolean (true or false)
    bool student = true;
    bool isActive = true;
    bool isSmoking = false;

    std::cout << student << '\n';
    std::cout << isActive << '\n';
    std::cout << isSmoking << '\n';

    // string (an object that represents a sequence of characters)
    std::string greeting = "Hello!";
    std::string name = "Azizbek";
    std::string surname = "Abibullayev";

    std::cout << greeting << '\n';
    std::cout << name << '\n';
    std::cout << surname << '\n';

    std::cout << greeting << " " << name << '\n';

    // In C++, constants are variables whose value cannot be changed after initialization
    /* 
        A const variable must be initialized at the moment of declaration:
        
        const int x = 19; // ✅ correct

        const int x; // ❌ error
        x = 19;
    */

    const double PI = 3.14159;
    // PI = 1 ❌ error
    const int LIGHT_SPEED = 299792458;
    const int width = 1920;
    const int height = 1080;


    return 0;
}