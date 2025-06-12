#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    void displayData() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1(1, "Alice", 95.5);
    student1.displayData();
    return 0;
}

