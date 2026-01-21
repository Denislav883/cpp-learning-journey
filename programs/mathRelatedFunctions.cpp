#include <iostream>
#include <cmath>

int main() {
    double x = 3.99;
    double y = 20;
    double z;

    z = std::max(x, y); // returns the greater number - y
    z = std::min(x, y); // returns the smaller number - x
    z = pow(2, 5); // returns the powered number - 25
    z = sqrt(4); // returns the square root of number - 2
    z = abs(-4); // returns the absolute value of number - 4
    z = round(x); // returns the rounded number - 4
    z = ceil(x); // returns the rounded up number - 4
    z = floor(x); // returns the rounded down number - 3

    std::cout << z;

    return 0;
}