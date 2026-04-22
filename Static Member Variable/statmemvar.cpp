//static member variable
#include <iostream>
using namespace std;

class xyz {
    int a;
    static int b;
public:
    void get() { cin >> a >> b; }
    void put() {
        cout << a << endl ;
        cout << b << endl;
    }
};

int xyz::b;

int main() {
    xyz o1,o2;
    o1.get();
    o1.put();

    o2.get();
    o2.put();

    o1.put();
    return 0;
}