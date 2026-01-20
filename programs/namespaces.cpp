#include <iostream>
using namespace std;

namespace first {
    int x = 5;
}

namespace second {
    int x = 15;
}

int main() {
    // to print the x with value of 5
    // using namespace first;
    // cout << x << endl;

    // to print the x with value of 15
    using namespace second;

    cout << x << endl;

    // to print the x with value of 25
    // int x = 25;
    // cout << x << endl;

    return 0;
}