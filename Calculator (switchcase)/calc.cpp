#include <iostream>
int main() {
    using namespace std;
    char op;
    int a,b;

    //getting the values
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"+? -? *? /?";
    cin>>op;

    //switchcase
    switch (op) {
        case '+':
            cout<<"The sum of the two numbers: "<< (a + b);
            break;
        case '-':
            cout<<"The difference of the two numbers: "<< (a - b);
            break;
        case '*':
            cout<<"The product of the two numbers: "<< (a * b);
            break;
        case '/':
            cout<<"The division of the two numbers: "<< (a / b);
            break;
        default:
            cout<<"Enter a valid operator";
            break;
    }
    return 0;
}