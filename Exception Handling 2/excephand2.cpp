//Exception handling program checking for zero division error
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter the value for a and b: " << endl;
    cin >> a >> b;
    try {
        if (b==0) {
            throw b;
        }
        else {
            cout << a/b << endl;
        }
    }
    catch (...) {
        cout << "The value of b cannot be zero\n";
    }
    return 0;
}