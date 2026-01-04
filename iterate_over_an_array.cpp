#include <iostream>
using std::cout;

int main() {
    // Array size = sizeof(array) / sizeof(array[0]); works for any type

    int grades[] = {1,2,3,4,5};

    for (int i = 0; i < sizeof(grades) / sizeof(grades[0]); i++) {
        cout << grades[i] << '\n';
    }

    return 0;
}