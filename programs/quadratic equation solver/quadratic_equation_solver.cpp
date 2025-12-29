#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int main() {
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;

    if (a == 0) { 
        cout << "This is not a quadratic equation";
        return 0;
    }
    
    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    double D = b*b - 4*a*c;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);

        cout << "x1: " << x1 << '\n';
        cout << "x2: " << x2 << '\n';
    } else if (D == 0){ 
        double x = -b / (2 * a);
        cout << "x: " << x;
    } else { 
        cout << "The equation has no real roots";
    }

    return 0;
}