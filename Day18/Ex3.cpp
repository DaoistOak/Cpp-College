#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
public:
    friend istream &operator>>(istream &in, Student &s);
    friend ostream &operator<<(ostream &out, Student &s);
};

istream &operator>>(istream &in, Student &s) {
    in >> s.name >> s.roll;
    return in;
}

ostream &operator<<(ostream &out,Student &s) {
    out << "Name: " << s.name << ", Roll: " << s.roll;
    return out;
}

int main() {
    Student s1;
    cout << "Enter student's name and roll number: ";
    cin >> s1;
    cout << "Student Information: " << s1 << endl;
    return 0;
}
