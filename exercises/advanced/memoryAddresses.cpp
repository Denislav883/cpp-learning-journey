#include <iostream>
using namespace std;

int main() {
    // memory address - a location in memory where data is stored. It can be accessed with & (address-of operator)

    string name = "Denislav";
    int age = 17;
    bool student = true;

    cout << &name << "\n";
    cout << &age << "\n";
    cout << &student << "\n";
    
    return 0;
}