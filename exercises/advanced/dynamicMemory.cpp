#include <iostream>
using namespace std;

int main() {
    // dynamic memory - memory that is allocated after the program is already compiled & running.
    // Use the 'new' operator to allocate memory in the heap rather than the stack

    char *pGrades = NULL;
    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;

    pGrades = new char[5];

    for(int i = 0; i < size; i++) {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}