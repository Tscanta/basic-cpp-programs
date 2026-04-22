//Class Template with multiple parameters
#include <iostream>
using namespace std;
template<class T1,class T2>
class add2 {
public:
    T1 x;
    T2 y;
    add2() {
        cout << "Enter an integer value: ";
        cin >> x;
        cout << endl;
        cout << "Enter a double value: ";
        cin >> y;
        cout << x + y << endl;
    }
};
int main() {
    add2<int,double>ob;
    return 0;
}