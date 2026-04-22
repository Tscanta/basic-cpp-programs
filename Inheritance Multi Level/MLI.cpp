//Multi Level inheritance
#include <iostream>
using namespace std;
class animal{
public:
    void info(){
        cout << "We are an animal\n";
    }
};

class dog:public animal {
public:
    void bark() {
        cout << "I am a dog and i bark!\n";
    }
};

class cat:public dog {
public:
    void meow() {
        cout << "I am a cat and i meow!\n";
    }
};

int main() {
    cat c;
    c.info();
    c.bark();
    c.meow();
}
