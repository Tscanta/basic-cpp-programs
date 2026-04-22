#include <iostream>    //C++ Program to enter and display information using constructors
using namespace std;
class Student {
    //initializing the variables
    int roll;
    string name;
    double cgpa;
public:
    Student() {
        cout << "Enter the name of the student: " << endl;
        cin >> name;
        cout << "Ether the roll number of the student: " << endl;
        cin >> roll;
        cout << "Ether the cgpa of the student: " << endl;
        cin >> cgpa;
    }

    //Displaying the information
    void display() {
        cout << "The name of the student is: " << name << endl;
        cout << "The roll num of the student is: " << roll << endl;
        cout << "The cgpa of the student is: " << cgpa << endl;
    }

    //Destructor - destroys the given information
    ~Student() {
        cout << "information destroyed\n";
    }
};
//The main function
int main() {
    Student st;
    st.display();
}