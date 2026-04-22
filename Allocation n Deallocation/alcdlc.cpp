#include <iostream>
using namespace std;
int main() {
    //Dynamic memory allocation
    int *ptr_int = new int{45};
    float *ptr_float = new float{45.45};

    //Printing
    cout << *ptr_int << endl;
    cout << *ptr_float << endl;

    //De-allocation
    delete ptr_int;
    delete ptr_float;
}