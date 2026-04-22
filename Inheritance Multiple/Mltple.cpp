#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Hello from A\n";
    }
};

class B {
public:
    B() {
        cout << "Hello from B\n";
    }
};

class C:public A, public B {
public:
    C() {
        cout << "Hello from C\n";
    }
};

int main() {
    C c1;
}
