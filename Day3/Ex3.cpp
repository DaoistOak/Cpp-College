#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks[5];
};

int main() {
    Student student;

    cout << "Enter student's name: ";
    getline(cin, student.name);

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> student.marks[i];
    }

    cout << "Student Name: " << student.name << endl;
    cout << "Marks obtained in 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << student.marks[i] << endl;
    }

    return 0;
}


