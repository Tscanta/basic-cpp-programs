#include <iostream>
using namespace std;
void MyHandler() {
    try {
        throw 5;
    }
    catch (const int) {
        cout << "Caught exception inside Myhandler()\n";
        throw "Random_String_Error"; //rethrow char*/string out of the function
    }
}
int main() {
    cout << "Start of main function\n";
    try {
        MyHandler();
    }
    catch (const char*) {
        cout << "String exception caught inside main\n";
    }
    cout << "Main End\n";
    return 0;
}