#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "What's your age: ";
    std::cin >> age; // accept user input

    std::cout << "What is your full name: ";
    std::getline(std::cin >> std::ws, name);
    //getline() - function for strings that could include spaces
    //std::ws - removes any new line characters or any white spaces before any user input

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";

    return 0;
}