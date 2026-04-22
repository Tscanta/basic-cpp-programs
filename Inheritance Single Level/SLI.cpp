#include <iostream>
using namespace std;
//ANIMAL
class animal{
public:
    void sound() {
        cout << "I make animal sounds\n";
    }
};

//DOG
class dog:public animal {
public:
    void bark() {
        cout << "BOW BOW!\n";
    }
};

//MAIN FUNC
int main() {
    dog d1;
    d1.sound();
    d1.bark();
}
