#include <iostream>
#include <ctime>

//SPIN THE WHEEL
int main() {
    using namespace std;
    srand(time(0));

    //Initializing
    char choice;
    int num;

    //Menu
    cout << "--------SPIN THE WHEEL-------" << '\n';
    cout << "Do you want to spin the wheel?" << '\n';
    cout << "Press 'Y' if you do else press 'N' to leave" << '\n';
    cin >> choice;

    //Logic
    if (choice == 'Y' || choice == 'y') {
       cout << "spinning..." << '\n';
        num = (rand() % 6) + 1;
        cout << "Your number is: " << num << '\n';
        switch (num) {
            case 1:
                cout << "and you win a flashlight";
                break;
            case 2:
                cout << "and you win two tickets to zootopia 2";
                break;
            case 3:
                cout << "and your prize is...deportation....oh am sorry...";
                break;
            case 4:
                cout << "and your prize is two nights with mr beast";
                break;
            case 5:
                cout << "aaand your prize is...uh nothing welps better luck next time";
                break;
            case 6:
                cout << "and your prize is the unredacted copy of the epstein files";
                break;
        }
    }
    else if (choice == 'N' || choice == 'n') {
        cout << "we will meet soon.";
    }
    else {
        cout << "can you be a smart boy and just follow the instructions :) thank you";
    }
}