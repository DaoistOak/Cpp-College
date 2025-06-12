#include<iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int marks;
};

int main() {
    Student student1;
    cout << "Enter student's name: ";
    cin >> student1.name;

    cout << "Enter roll number: ";
    cin >> student1.rollNo;
    
    cout << "Enter marks: ";
    cin >> student1.marks;
    
    cout << "Student's roll number: " << student1.rollNo << endl;
    cout << "Student's marks: " << student1.marks << endl;
    
    return 0;
}
