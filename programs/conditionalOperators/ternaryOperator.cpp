#include <iostream>

int main() {
    int num;

    std::cout << "Enter a num: ";
    std::cin >> num;

    num % 2 == 0 ? std::cout << "This number is even." : std::cout << "This number is odd.";
    
    return 0;
}