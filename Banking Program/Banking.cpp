git #include <iostream>
#include <iomanip>
using namespace std;

//INIT
void showBalance(double balance);
double deposit();
double withdraw(double balance);

//MAIN
int main() {
    double balance = 0;
    int choice = 0;

    do {
        cout << "--------ATM---------\n";
        cout << "Hello welcome User! \n";
        cout << "Press 1 to check balance: \n";
        cout << "Press 2 to deposit money: \n";
        cout << "Press 3 to withdraw money: \n";
        cout << "Press 4 to exit: \n";
        cin >> choice;

        //prevents the program from crashing when a string is entered
        cin.clear();
        cin.ignore(10000, '\n');

        //Switch Case
        switch (choice)
            {
                case 1:
                    showBalance(balance);
                    break;

                case 2:
                    balance += deposit();
                    showBalance(balance);
                    break;

                case 3:
                    balance -= withdraw(balance);
                    showBalance(balance);
                    break;

                case 4:
                    cout << "Thank you for using!\n";
                    break;

                default:cout << "Invalid input!!\n";
                    break;
            }
        }while(choice != 4);
    return 0;
}

//BALANCE
void showBalance(double balance) {
    cout << "Your balance is: $" << setprecision(2) << fixed <<  balance << '\n';
}

//DEPOSIT
double deposit() {
    double amount = 0;
    cout << "Enter the amount you want to deposit:\n ";
    cin >> amount;

    //Stopping from entering a negative deposit amount
    if (amount > 0) {
        return amount;
    }
    else {
        cout << "You cannot deposit in negative amount!\n";
    }
}

//WITHDRAW
double withdraw(double balance ) {
    double amount = 0;
    cout << "Enter the amount you want to withdraw:\n ";
    cin >> amount;

    //if the amount you are trying to withdraw is more than your total balance
    if (amount > balance) {
        cout << "Invalid withdrawal request (you dont have that much money brokie hahahaha)\n";
        return 0;
    }
    //stopping from withdrawing negative amount of money like -1000$
    else if (amount < 0){
        cout << "You cant withdraw in negative money!!";
    }
    else {
        return amount;
    }
}
