#include <iostream>
using namespace std;

int main() {
    // pointers - variable that stores a memory address of another variable
    // "&" address-of operator
    // "*" dereference operator (with this operator * we are accessing the value that's at the given address)
    
    string name = "Denislav";
    int age = 17;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pNmame = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pNmame << "\n";
    cout << *pAge << "\n";
    cout << *pFreePizzas << "\n";

    return 0;
}