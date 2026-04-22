//Virtual Destructor
#include <iostream>
using namespace std;

//base class
class Animal{
public:
    Animal() {
        cout << "Animal has been created\n";
    }
     virtual ~Animal() { //making the destructor in the base class virtual means all the derived class destructors are also virtual
        cout << "Animal has been destroyed\n";
    }
};

//derived class
class dog:public Animal{
public:
    dog() {
        cout << "Dog has been created\n";
    }
    ~dog() {
        cout << "Dog has been destroyed\n";
    }
};

//main function
int main() {
    Animal *a = new dog();
    delete a;
    return 0;
}

