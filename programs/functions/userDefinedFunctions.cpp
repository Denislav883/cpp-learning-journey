#include <iostream>
using namespace std;

void happyBirthday(int birthdayAge) {
    cout << "Happy Birthday to you!\n";
    cout << "You are " << birthdayAge << " years old!";
}

int main() {
    int age = 20;
    
    happyBirthday(age);
    
    return 0;
}