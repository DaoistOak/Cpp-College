#include <iostream>
using namespace std;

int main() {
    string fullName;
    int age;
    float height;
    char grade;
    bool pass;

    cout << "Enter Full Name: ";
    getline(cin, fullName);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height (in feet): ";
    cin >> height;
    cout << "Enter Grade: ";
    cin >> grade;
    cout << "Pass Status: ";
    cin >> pass;

    cout << "Name: " << fullName << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pass Status: " << (pass? "Pass" : "Fail") << endl;

    return 0;
}