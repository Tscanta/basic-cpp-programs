#include <iostream>
using namespace std;
class PTO
{
    int age;
    string name;
public:
    void getdata()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << endl;
        cout << "Enter your age: ";
        cin >> age;
        cout << endl;
    }
    void display()
    {
        cout << "-------------------------------------" << endl;
        cout << "Your name is: " << name << endl;
        cout << "Your age is: " << age << endl;
    }
};

int main() {
    PTO *p = new PTO();
    p->getdata();
    p->display();
    return 0;
}