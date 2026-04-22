#include <iostream>
using namespace std;

class animal {
public:
    void info() {
        cout << "I am an animal\n";
    }
};

class dog:public animal {
public:
    void bark() {
        cout << "BARK BARK\n";
    }
};

class cat: public animal {
public:
    void meow() {
        cout << "MEOW MEOW\n";
    }
};

int main() {
    dog d;
    d.info();
    d.bark();
    cat c;
    c.info();
    c.meow();
    return 0;
}