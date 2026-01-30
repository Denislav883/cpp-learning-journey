#include <iostream>
using namespace std;

int main() {
    string students[] = {"David", "Luffy", "Elon"};

    for(string student : students) {
        cout << student << "\n";
    }

    return 0;
}