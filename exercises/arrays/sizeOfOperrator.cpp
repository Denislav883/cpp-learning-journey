#include <iostream>
using namespace std;

int main() {
    // sizeof() - determines the size in bites of a: variable, data type, class, objects, etc.

    string name = "Denislav"; // this takes 32 bytes
    char grade = 'F'; // this takes 1 bytes
    int num = 5; // this takes 8 bytes
    bool student = true; // this takes 1 bytes
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // this takes 5 bytes

    cout << sizeof(grades) / sizeof(char) << " elements\n"; // this will print the length of grades array 

    return 0;
}