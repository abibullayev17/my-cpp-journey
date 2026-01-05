#include <iostream>
using std::cout;

int main() {
    // bubble sort
    // Bubble sort repeatedly compares adjacent elements and swaps 
    // them if they are in the wrong order, causing larger elements to “bubble” to the end of the array on each pass.

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    for (int n : array)
        cout << n << " ";

    return 0;
}