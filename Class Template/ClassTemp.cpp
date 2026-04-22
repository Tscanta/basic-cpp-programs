//Class template
#include <iostream>
using namespace std;
template <class T>
class add {
public:
    T n1,n2;
    add() {
        cin >> n1 >> n2;
        cout << n1 + n2 << endl;
    }
};
int main() {
    add<int>obj; //class template
    return 0;
}