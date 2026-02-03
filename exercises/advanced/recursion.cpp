#include <iostream>
using namespace std;

    void walk(int steps);

int main() {
    // recursion - a programming technique where a function invokes itself from within break a complex concept into a repitable sinfgle steps

    walk(100);

    return 0;
}

void walk(int steps) {

    if(steps > 0) {
        cout << "You take a step!\n";
        walk(steps - 1); // this is a recursion - the function invokes itself from within
    }
}