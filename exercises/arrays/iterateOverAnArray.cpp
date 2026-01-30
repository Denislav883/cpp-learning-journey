#include <iostream>
using namespace std;

int main() {
    string students[] = {"David", "Luffy", "Elon"};
    int length = sizeof(students) / sizeof(string);

    for(int i = 0; i < length;i++) {
        cout << students[i] << "\n";
    }

    return 0;
}