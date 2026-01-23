#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "*********** Temperature conversion ***********\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit whould you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter the tempretaure in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Tempretaure is: " << temp << "F\n";
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the tempretaure in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Tempretaure is: " << temp << "C\n";
    } else {
        std::cout << "Please enter in only F or C!\n";
    }

    std::cout << "**********************************************";

    return 0;
}