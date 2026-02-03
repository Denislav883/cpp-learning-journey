#include <iostream>
using namespace std;

template <typename T, typename U>

auto maxNum(T x, U y) {  // with auto the compilor will deduce what the return type should be and will return that type
    return (x > y) ? x : y;
}

int main() {
    // function template - describes what a function looks like. Can be used to generate as many overloaded functions as needed, each using different data types.
    
    cout << maxNum(1, 1.5) << '\n';
    
    return 0;
}