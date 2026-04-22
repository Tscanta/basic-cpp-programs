//Hybrid inheritance
#include <iostream>
using namespace std;
class animal
{
public:
    animal()
    {
        cout << "i make animal sounds\n";
    }
};

class dog:public virtual animal
{
public:
    dog()
    {
        cout << "BARK BARK\n";
    }
};

class cat:public virtual animal
{
public:
    cat()
    {
        cout << "meow meow\n";
    }
};

class dogcat:public dog, public cat
{
public:
    dogcat()
    {
        cout << "We are animals\n";
    }
};

int main()
{
    dogcat dc;
    return 0;
}
