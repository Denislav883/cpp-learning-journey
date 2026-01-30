#include <iostream>
using namespace std;

    int myNum = 3;

    void printNum();

int main() {
    int myNum = 1;

    cout << myNum << "\n";
    printNum();
    cout << ::myNum << "\n"; // :: this will ignore the local scope and will print myNum, declared in the global scope
    
    return 0;
}

void printNum() {
    int myNum = 2;
    cout << myNum << "\n";
}