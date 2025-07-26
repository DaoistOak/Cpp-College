#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    Student(string n, int r, float m) : name(n), roll(r), marks(m) {}

};

int main() {
    string name;
    int roll;
    float marks;

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's roll number: ";
    cin >> roll;
    cout << "Enter student's marks: ";
    cin >> marks;

    Student student(name, roll, marks);

    ofstream file("record.txt");
    if (file.is_open()) {
        file << "Name: " << student.name << ", Roll: " << student.roll << ", Marks: " << student.marks;
        file.close();
    } else {
        cout << "Unable to open file";
        return 1;
    }

    ifstream readFile("record.txt");
    if (readFile.is_open()) {
        string line;
        while (getline(readFile, line)) {
            cout << line << endl;
        }
        readFile.close();
    } else {
        cout << "Unable to open file for reading";
        return 1;
    }

    return 0;
}
