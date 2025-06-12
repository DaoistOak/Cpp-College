#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    Student() {
        name = "Someone";
        age = 0;
        gpa = 0.0;
    }

    Student(string n, int a, float g) {
        name = n;
        age = a;
        gpa = g;
    }

    Student(const Student &s) {
        name = s.name;
        age = s.age;
        gpa = s.gpa;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student student1("Student 1", 20, 3.8);
    cout << "Student 1:" << endl;
    student1.display();
    cout << endl;

    Student student2 = student1;
    cout << "Student 2 details (copied):" << endl;
    student2.display();

    return 0;
}


