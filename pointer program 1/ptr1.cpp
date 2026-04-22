#include <iostream>
using namespace std;
int main() {
    string food = "pizza";
    string *ptr;
    ptr = &food;
    cout << "Inside the variable food: " << food << endl;
    cout << "Inside the variable *ptr: " << *ptr << endl;
    cout << "Inside the variable ptr: " << ptr << endl;
}