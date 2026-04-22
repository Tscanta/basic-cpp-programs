//Rethrowing an exception
#include <iostream>
using namespace std;

void check(int n) {
    try {
        if (n==0)
            throw n;
    }
    catch (int x) {
        cout << "Exception has been caught inside the check function\n";
        throw;
    }
};

int main() {
    int p;
    bool error = false;
    cout << "Enter a number:\n";
    cin >> p;
    try {
        check(p);
    }
    catch (int x) {
        cout << "The number cannot be zero\n";
        error = true;
    }
    if (!error) {
        cout << "No error has been detected\n";
    }
    return 0;
}