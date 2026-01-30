#include <iostream>
using namespace std;

int main() {
    srand(time(0));

    int randomNum = rand() % 5 + 1;

    switch (randomNum) {
    case 1:
        cout << "You win a bumper sticker!\n";
        break;
    case 2:
        cout << "You win a bumper t-shirt!\n";
        break;
    case 3:
        cout << "You win a bumper concert tickets!\n";
        break;
    case 4:
        cout << "You win a bumper gift card!\n";
        break;
    case 5:
        cout << "You win a bumper telephone!\n";
        break;
    }

    return 0;
}