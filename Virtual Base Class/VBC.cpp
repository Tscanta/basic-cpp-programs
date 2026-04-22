#include <iostream>
using namespace std;
class Animal {
public:
    Animal(){}
};
    class Dog:public virtual Animal {
    public:
        Dog() {
            cout << "A dog\n";
        }
    };
    class Cat:public virtual Animal {
    public:
        Cat() {
        cout << "A cat\n";
        }
    };
    class Dogcat:public Dog, public Cat {
    public:
        Dogcat() {
            cout << "We are a dog and a cat\n";
        }
};
int main() {
    Dogcat dc;
    return 0;
}


