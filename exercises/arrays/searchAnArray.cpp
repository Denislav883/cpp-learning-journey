#include <iostream>
using namespace std;

int searchArray(string aray[], int size, string element);

int main() {
    string foods[] = {"pizza", "pasta", "hotdog"};
    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    string myFood;

    cout << "Enter an element to search for: " << "\n";
    cin >> myFood;

    index = searchArray(foods, size, myFood);

    if(index != -1) {
        cout << myFood << " is at index " << index ;
    } else {
        cout << myFood << " is not in the array!";
    }

    return 0;
}

int searchArray(string aray[], int size, string element) {
    for(int i = 0; i < size; i++) {

        if(aray[i] == element) {
            return i;
        }
    }

    return -1;
}