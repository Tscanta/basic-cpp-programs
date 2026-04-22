#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter 1 for integer exception\n";
    cout << "Enter 2 for double exception\n";
    cout << "Enter anything else for a character exception\n";
    cin >> choice;

    try {
        if (choice == 1)
            throw 1;
        else if (choice == 2)
            throw 1.1;
        else
            throw 'E';
    }
    catch (int x) {
        cout << "Integer exception caught: " << x << endl;
    }
    catch (double y) {
        cout << "Double exception caught: " << y << endl;
    }
    catch (char z) {
        cout << "Character exception caught: " << z << endl;
    }
    return 0;
}