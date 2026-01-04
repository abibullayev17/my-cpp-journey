#include <iostream>
using std::cout;

int main() {
    // foreach loop = loop that eases the traversal over an iterable data set
    // it is easier but less flexible

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for (std::string student : students)
        cout << student << '\n';

    return 0;
}