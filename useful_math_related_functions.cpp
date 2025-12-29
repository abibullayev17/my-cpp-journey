#include <iostream>
#include <cmath> // => cmath is a library that provides a collection of pre-defined functions for performing common and advanced math operations
using std::cout;

int main() {
    double x = 3;
    double y = 4; 
    double z;

    double rndmnumber = 3.6;

    z = std::max(x, y); // => returns the maximum number, min returns the minimum number
    cout << z << '\n';

    int a = pow(2, 3); // => 8
    cout << a << '\n';

    int b = sqrt(9); // => 3
    cout << b << '\n';

    int c = abs(-3); // => 3
    cout << c << '\n';

    int d = round(rndmnumber); // => 4, if it was 3.4 the result would be 3
    cout << d << '\n';

    int e = ceil(rndmnumber); // => 4, ceil -> always makes the number higher
    cout << e << '\n';

    int f = floor(rndmnumber); // => 3, floor -> always makes the number lower

    return 0;
}