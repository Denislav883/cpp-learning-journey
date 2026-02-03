#include <iostream>
using namespace std;

class Car {
    public:
        string make;
        string model;
        string color;
        int year;

    Car(string make, string model, string color, int year) {
        this->make = make;
        this->model = model;
        this->color = color;
        this->year = year;
    }
};

int main() {
    // constructor - special method that is automatically called when an object is instantiated. Useful for assigning values to atributes as arguments

    Car car1("Lamborgini", "Aventador", "black", 2024);

    cout << car1.make << "\n";
    cout << car1.model << "\n";
    cout << car1.color << "\n";
    cout << car1.year << "\n";

    return 0;
}