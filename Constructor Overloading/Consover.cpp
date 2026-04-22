#include <iostream>
using namespace std;
class ABC {
    int a,b,c;
public:
    ABC(int x, int y) {
        a=x;
        b=y;
        c=0;
    }
    ABC(int x, int y, int z) {
        a=x;
        b=y;
        c=z;
    }
    ABC(int x) {
        a=x;
        b=0;
        c=0;
    }
    void printnum() {
        cout << "sum: " << a+b+c << endl;
    }
};

int main() {
    ABC ob(10,20);
    ob.printnum();

    ABC ob1(13,45,23);
    ob1.printnum();

    ABC ob2(92);
    ob2.printnum();
    return 0;
}