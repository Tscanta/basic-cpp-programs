#include <iostream>
using namespace std;
int main() {
    //Size of the array
    const int SIZE = 10;

    //declaring an array
    string temp;
    string food[SIZE];

    //Inputting the elements
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter your favourite food items OR press 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
           food[i] = temp;
        }
    }

    //Displaying the items
    cout << "Your favourite food items are: " << endl;
    for (int i = 0; !food[i].empty(); i++) {
        cout << food[i] << endl;
    }
}