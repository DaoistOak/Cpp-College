#include <iostream>
using namespace std;

class Parent {
private:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Parent {
private:
    int roll;
public:
    void setRoll(int r) {
        roll = r;
    }
    void display() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student student;
    student.setName("John Doe");
    student.setRoll(123);
    student.display();
    return 0;
}

