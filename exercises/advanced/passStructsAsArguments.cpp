#include <iostream>
using namespace std;

struct Car {
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car &car, string color);

int main() {
    
    Car car1;
    Car car2;

    car1.model = "Lamborgini";
    car1.year = 2024;
    car1.color = "black";

    car2.model = "Ferrari";
    car2.year = 2018;
    car2.color = "red";

    paintCar(car1, "green");
    paintCar(car2, "yellow");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car) {
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n";
}

void paintCar(Car &car, string color) {
    car.color = color;
}