#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    //initializing
    int hyp = 0;
    int pr = 0;
    int bs = 0;

    //Inputting
    cout << "Enter the perimeter of the triangle: ";
    cin >> pr;
    cout << "Enter the base of the traingle: ";
    cin >> bs;

    //Displaying the contents
    cout << "Your perimeter is: " << pr << '\n';;
    cout << "Your base is: " << bs << '\n';

    //Powering the perimeter and the base
    int prpow = pow(pr,2);
    int bspow = pow(bs,2);

    //Adding the perimeter and the base
    int prbs = prpow + bspow;

    //Finding the real hypotenuse by squaring prbs
    hyp = sqrt(prbs);

    //Displaying the hypotenuse
    cout << "Your hypotenuse is: " << hyp << '\n';

    return 0;
}