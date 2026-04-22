//static member function
#include <iostream>
using namespace std;

class Student {
private:
    static int count; //shared by all the objects
public:
    Student() {
        count++; // count increases when an object is created
    }

    //static member function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

//initializing the static variable
int Student::count=0;

int main() {
    Student s1,s2,s3;

    Student::showCount();

    return 0;
}