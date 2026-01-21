#include <iostream>

int main() {
    int age;
    int day;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Welcome to the site!" << std::endl;
    } else if(age > 13) {
        std::cout << "You need permission to enter the site!" << std::endl;
    } else {
        std::cout << "You are not allowed to use this site!" << std::endl;
    }

    std::cout << "What day is it: ";
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "Today is Monday";
        break;
    case 2:
        std::cout << "Today is Tuesday";
        break;
    case 3:
        std::cout << "Today is Wednesday";
        break;
    case 4:
        std::cout << "Today is Thursday";
        break;
    case 5:
        std::cout << "Today is Friday";
        break;
    case 6:
        std::cout << "Today is Saturday";
        break;
    case 7:
        std::cout << "Today is 1Sunday";
        break;
    default:
        std::cout << "Please enter a valid day!";
        break;
    }

    return 0;
}