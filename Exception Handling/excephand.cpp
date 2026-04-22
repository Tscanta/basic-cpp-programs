//Exception handling program, if users age is greater than 150 throw it (try,throw, catch)
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    try {
        if (age>=150) {
            throw age;
        }
        else {
            cout << "Your age is: " << age;
        }
    }
    catch (int age) {
        cout << "Your age is not valid\n";
    }
    return 0;
}