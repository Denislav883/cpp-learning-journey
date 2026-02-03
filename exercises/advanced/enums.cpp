#include <iostream>
using namespace std;

enum Day {monday = 0, tuesday = 1, wednesday = 2, thursday = 3, friday = 4, saturday = 5, sunday = 6};

int main() {
    // enums - a user-defined data type that consists of paired named-integer constants. GREAT if you have a set of potential options

    Day today = monday;

    switch (today)
    {
    case monday: // this can be also done with the enum numbers
        cout << "It is Monday!\n";
        break;
    case tuesday:
        cout << "It is Tuesday!\n";
        break;
    case wednesday:
        cout << "It is Wednesday!\n";
        break;
    case thursday:
        cout << "It is Thursday!\n";
        break;
    case friday:
        cout << "It is Friday!\n";
        break;
    case saturday:
        cout << "It is Saturday!\n";
        break;
    case sunday:
        cout << "It is Sunday!\n";
        break;  
    default:
        break;
    }

    return 0;
}