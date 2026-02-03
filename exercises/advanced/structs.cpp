#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    bool enrolled;
};


int main() {
    // struct - A structure that group related variables under one name. Structs can contain many different data types(string, int, double, etc.)
    // variables in a struct is known as a "members". Members can be access with '.' (Class Member Access Operator)

    student student1;
    student1.name = "David";
    student1.age = 17;
    student1.enrolled = true;

    student student2;
    student1.name = "Elon";
    student1.age = 16;
    student1.enrolled = true;

    cout << student1.name << "\n";
    cout << student1.age << "\n";
    cout << student1.enrolled << "\n";

    cout << student2.name << "\n";
    cout << student2.age << "\n";
    cout << student2.enrolled << "\n";

    return 0;
}