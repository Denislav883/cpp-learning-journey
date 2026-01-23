#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if(name.length() > 12) {
    //     std::cout << "Your name can't be over 12 characters!";
    // } else {
    //     std::cout << "Welcome " << name;
    // }

    // name.clear(); // clears the written name
    // name.append(".gmail@com") // this appends a string to your string
    // name.at(0) // this takes the character at the given position. Here is 0
    // name.insert(0, "@") // this insert a "@" at the position/index 0
    // name.find(' ') // this would return the all indexes which the find method find a ws
    // name.erase(0, 3) // this removes the characters in the range of 0-3 index

    if(name.empty()) {
        std::cout << "You didn't enter your name!";
    } else {
        std::cout << "Hello your name is " << name;
    }


    return 0;
}