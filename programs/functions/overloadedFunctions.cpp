#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main() {
    // each function has an own signiture(the name of the function and its params) and it should be unique
    // bakePizza(); this will call the first function
    // bakePizza(); this will call the second function
    bakePizza("pepperoni, mushroom"); // this will call the third function

    return 0;
}

void bakePizza() {
    cout << "Here is your pizza.";
}

void bakePizza(string topping1) {
    cout << "Here is your " << topping1 << " pizza.";
}

void bakePizza(string topping1, string topping2) {
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza.";
}