#include <iostream>

// TYPE ALIASES WITH "typedef"
// typedef std::string text_t;
// typedef int number_t;

//TYPE ALIASES WITH "using"
using text_t =  std::string;
using number_t = int;

int main() {
    text_t city = "Plovdiv";
    number_t age = 17;
    
    std::cout << city << "\n";
    std::cout << age << "\n";

    return 0;
}