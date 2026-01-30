#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));

    int num = (rand() % 6) + 1; // this will give a random number between 1 and 6

    cout << num;

    return 0;
}