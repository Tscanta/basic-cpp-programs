//virtual function
#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "animal makes a sound" << endl;
    }
};

//class dog is inheriting from class animal
class Dog:public Animal {
public:
     sound() {
        cout << "BARK BARK!" << endl;
    }
};

//class cat is inheriting from animal too
class Cat:public Animal {
public:
    void sound() {
        cout << "MEOW MEOW" << endl;
    }
};

int main() {
    Animal a;
    Dog D;
    D.sound();
    Cat C;
    C.sound();
}