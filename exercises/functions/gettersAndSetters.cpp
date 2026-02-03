#include <iostream>
using namespace std;

class Stove {
    private:
        int temperature;
    public:

    Stove(int temperature) {
        setTemperature(temperature);
    }

    int getTemperature() {
        return temperature;
    }

    void setTemperature(int temperature) {

        if(temperature < 0) {
            this->temperature = 0;
        } else if(temperature >= 10) {
            this->temperature = 10;
        } else {
            this->temperature = temperature;
        }
    }
};

int main() {
    // Abstraction - hiding unnecessary data from outside a class
    // getter - function that makes a private atribute READABLE
    // setter - function that makes a private atribute WRITABLE

    Stove stove(0);

    stove.setTemperature(5);

    cout << "The temperature is: " << stove.getTemperature();
    return 0;
}