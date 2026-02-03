#include <iostream>
using namespace std;

class Car {
    public:
        string make;
        string model;
        string color;
        int year;

        void accelerate() {
            cout << "You step on the gas.\n";
        }

        void brake() {
            cout << "You step on the brakes.\n";
        }
};

int main() {
    // object - A collection of atributes and methods. They can have characteristics and could perform actions. Can be used to minic real world items(ex. Phone, Book, etc.). Created from a class which acts as a "blue-print" 

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.color = "silver";
    car1.year = 2023;

    cout << car1.make << "\n";
    cout << car1.model << "\n";
    cout << car1.color << "\n";
    cout << car1.year << "\n";

    car1.accelerate();
    car1.brake();

    return 0;
}