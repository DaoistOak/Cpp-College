#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int age;
    public:
        Student() {
            name = "";
            age = 0;
        }
        void setData() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Student* singleStudent = new Student();
    singleStudent->setData();
    singleStudent->display();
    delete singleStudent;

    int size;
    cout << "Enter number of students: ";
    cin >> size;
    
    Student* studentArray = new Student[size];
    
    cout << "Enter data for " << size << " students:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Student " << i+1 << ":" << endl;
        studentArray[i].setData();
    }
    
    cout << "\n Displaying:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Student " << i+1 << ":" << endl;
        studentArray[i].display();
    }
    delete[] studentArray;
    return 0;
}

