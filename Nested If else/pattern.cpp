#include <iostream>
using namespace std;

void star();
void integerpatt1();
void integerpatt2();
void integerpatt3();

int main() {
    int op;
    cout << "------PATTERN PROGRAMS-----\n";
    cout << "Press 1 to print the patttern:\n";
    cout << "*\n";
    cout << "* *\n";
    cout << "* * *\n";
    cout << "* * * *\n";
    cout << " ";
    cout << "-----------------------------------------\n";
    cout << "Press 2 to print the patttern:\n";
    cout << "1\n";
    cout << "1 2\n";
    cout << "1 2 3\n";
    cout << "1 2 3 4\n";
    cout << " ";
    cout << "-----------------------------------------\n";
    cout << "Press 3 to print the patttern:\n";
    cout << "1\n";
    cout << "2 2\n";
    cout << "3 3 3\n";
    cout << "4 4 4 4\n";
    cout << " ";
    cout << "-----------------------------------------\n";
    cout << "Press 4 to print the patttern:\n";
    cout << "1\n";
    cout << "2 3\n";
    cout << "4 5 6\n";
    cout << "7 8 9 10\n";
    cout << " ";
    cout << "-----------------------------------------\n";
    cin >> op;
    switch (op) {
        case 1:
            star();
            break;
        case 2:
            integerpatt1();
            break;
        case 3:
            integerpatt2();
            break;
        case 4:
            integerpatt3();
            break;
        default:
            cout << "ERROR!";
    }
    return 0;
}

void star() {
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void integerpatt1() {
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++) {
            cout << j;
        }
        cout << endl;
    }
}

void integerpatt2() {
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++) {
            cout << i;
        }
        cout << endl;
    }
}

void integerpatt3() {
    int x=1;
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++){
            cout << x;
            x++;
        }
        cout << endl;
    }
}