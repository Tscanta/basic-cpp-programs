#include <iostream>
using namespace std;
class ArrayObject {
    int ItemNum;
    double cost;
public:
    void getdata();
    void display();
};

void ArrayObject::getdata(){
    cout << "Enter the Item Number: ";
    cin >> ItemNum;
    cout << "Enter the cost: ";
    cin >> cost;
}

void ArrayObject::display() {
    cout << "Item Number: " << ItemNum << endl;
    cout << "Item Cost: " << cost << endl;
}

int main() {
    int size;
    cout << "Enter the Array Size or the number of iterations you want: ";
    cin >> size;
    ArrayObject arr[size];
    //Getting the data
    for (int i=0;i<size;i++) {
        cout << "Iteration " << i+1 << endl;
        arr[i].getdata();
    }
    //Displaying the data
    cout << "----------DATA----------" << endl;
    for (int j=0;j<size;j++) {
        cout << "Data " << j+1 << endl;
        arr[j].display();
    }
    return 0;
}