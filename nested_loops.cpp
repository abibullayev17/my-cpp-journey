#include <iostream>
using std::cout;

int main() {
    // Nested loop = a loop inside another loop; inner loop completes all iterations for each outer loop iteration.

    for (int i = 1; i <= 3; i++) {
        cout << "Attempt: " << i << '\n';
        for (int j = 1; j <= 10; j++) {
            cout << j << ' ';
        }
        
        std::cout << '\n';
    }

    return 0;
}