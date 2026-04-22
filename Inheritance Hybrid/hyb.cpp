#include <iostream>
using namespace std;

class Person {
public:
    int age;
    string name;
};

class Student:virtual public Person {
public:
    int StudentID;
};

class Teacher:virtual public Person {
public:
    string subject;
};

class classroom:public Student, public Teacher {
public:
    void display() {
        cout << "Student name: " << name << endl;
        cout << "Student ID: " << StudentID << endl;
        cout << "Student age: " << age << endl;
        cout << "Teacher Subject: " << subject << endl;
    }
};

int main() {
    classroom cr;
    cr.name="Student";
    cr.StudentID=2025645528;
    cr.age=18;
    cr.subject="C++";
    cr.display();
    return 0;
}