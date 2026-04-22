#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int *p1;
    int *p2;

    p1 = &a;
    p2 = &b;

    cout << "Pointer for a: " << p1 << endl;
    cout << "Pointer for b: " << p2;
}