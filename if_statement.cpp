#include <iostream>
using std::cout;
using std::cin;

int main() { 
    // if statement = do something if a condition is true,
    //                  if not, skip it
    // to add more conditions we can use "else if"

    std::string student; 

    cout << "Are you a student?: ";
    cin >> student;

    if (student == "yes") {
        cout << "Congratulations";
    } else {
        cout << "Okay...";
    }

    return 0;
}