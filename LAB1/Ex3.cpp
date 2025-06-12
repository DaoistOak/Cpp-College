#include <iostream>

using namespace std;

int main() {
    string name;
    int rollNo;
    float marks;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll no: ";
    cin >> rollNo;
    cout << "Enter marks: ";
    cin >> marks;

    cout << "Name: " << name << endl; 
    cout << "Roll No: " << rollNo << endl; 
    cout << "Marks: " << marks<< endl;

    cout << "Name:\tRoll No:\tMarks:"<<endl;
    cout << name <<  "\t" << rollNo <<  "\t" << marks<<endl;

    return 0;
}



