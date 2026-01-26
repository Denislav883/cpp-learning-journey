#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while(number < 0); // whis will first do the code once and then will continue if the condition is true

    cout << "Your number is: " << number;
    return 0;
}