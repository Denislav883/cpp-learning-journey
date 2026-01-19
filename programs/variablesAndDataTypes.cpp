#include <iostream>

int main() {

    // integer (whole number)
    int age = 20;
    int year = 2025;
    int number = 5;
    
    std::cout << age << '\n';

    // double  (number including decimal)
    double price = 8.99;
    double tempretaure = 24.1;

    std::cout << price << '\n';

    // single character
    char grade = 'C';
    char initial = 'B';

    std::cout << initial << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    std::cout << forSale << '\n';

    // string (objects that represents a sequence of text)
    std::string food = "pizza";
    std::string day = "Monday";
    std::string month = "September";

    std::cout << "Today is " << day << '\n';

    // constants cannot be changed (read only)
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int HEIGHT = 1080;

    std::cout << "The value of PI is a constant value and it equals to " << PI << '\n';

    return 0;
}