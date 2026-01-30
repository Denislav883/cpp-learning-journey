#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while(number < 0); // this will first execute the block code once and then will continue executing the code again if the condition is true

    cout << "Your number is: " << number;
    return 0;
}