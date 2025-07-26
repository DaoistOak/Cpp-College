#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
class Student {
private:
int roll;
char name[50];
char address[100];
float marks;
public:
void input() {
cout << "Enter Roll Number: ";
cin >> roll;
if (roll <= 0) {
cout << "Invalid roll number! Setting to 1.\n";
roll = 1;
}
cin.ignore();
cout << "Enter Name: ";
cin.getline(name, 50);
cout << "Enter Address: ";
cin.getline(address, 100);
cout << "Enter Marks: ";
cin >> marks;
if (marks < 0 || marks > 100) {
cout << "Invalid marks! Setting to 0.\n";
marks = 0;
}
cin.ignore();
}
void display() const {
cout << left << setw(10) << roll
<< setw(20) << name
<< setw(30) << address
<< setw(10) << fixed << setprecision(2) << marks << endl;
}
void writeToFile(fstream &file) {
file.write(reinterpret_cast<char*>(this), sizeof(Student));
}
void readFromFile(fstream &file) {
file.read(reinterpret_cast<char*>(this), sizeof(Student));
}
int getRoll() const {
return roll;
}
};
void addRecord() {
fstream file("students.dat", ios::out | ios::app | ios::binary);
if (!file) {
cerr << "Error opening file for writing!\n";
return;
}
Student student;
cout << "\nEnter details for new student:\n";
student.input();
student.writeToFile(file);
file.close();
cout << "Record added successfully.\n";
}
void listRecords() {
fstream file("students.dat", ios::in | ios::binary);
if (!file) {
cerr << "Error opening file for reading!\n";
return;
}
cout << "\n---- Student Records ----\n";
cout << left << setw(10) << "Roll"
<< setw(20) << "Name"
<< setw(30) << "Address"
<< setw(10) << "Marks" << endl;
cout << string(70, '-') << endl;
Student student;
while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
student.display();
}
file.close();
}
void searchRecord(int roll) {
fstream file("students.dat", ios::in | ios::binary);
if (!file) {
cerr << "Error opening file for reading!\n";
return;
}
Student student;
bool found = false;
while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
if (student.getRoll() == roll) {
cout << "\n---- Record Found ----\n";
cout << left << setw(10) << "Roll"
<< setw(20) << "Name"
<< setw(30) << "Address"
<< setw(10) << "Marks" << endl;
cout << string(70, '-') << endl;
student.display();
found = true;
break;
}
}
file.close();
if (!found) {
cout << "\nRecord with roll number " << roll << " not found.\n";
}
}
void deleteRecord(int roll) {
fstream file("students.dat", ios::in | ios::binary);
if (!file) {
cerr << "Error opening file for reading!\n";
return;
}
fstream temp("temp.dat", ios::out | ios::binary);
if (!temp) {
cerr << "Error creating temporary file!\n";
file.close();
return;
}
Student student;
bool found = false;
while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
if (student.getRoll() != roll) {
student.writeToFile(temp);
} else {
found = true;
}
}
file.close();
temp.close();
if (found) {
remove("students.dat");
rename("temp.dat", "students.dat");
cout << "\nRecord with roll number " << roll << " deleted successfully.\n";
} else {
remove("temp.dat");
cout << "\nRecord with roll number " << roll << " not found.\n";
}
}
int main() {
int choice, roll;
while (true) {
cout << "\nStudent Management System\n";
cout << "1. Add Record\n";
cout << "2. List Records\n";
cout << "3. Search Record by Roll Number\n";
cout << "4. Delete Record by Roll Number\n";
cout << "5. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
cin.ignore();
switch (choice) {
case 1:
addRecord();
break;
case 2:
listRecords();
break;
case 3:
cout << "Enter Roll Number to search: ";
cin >> roll;
cin.ignore();
searchRecord(roll);
break;
case 4:
cout << "Enter Roll Number to delete: ";
cin >> roll;
cin.ignore();
deleteRecord(roll);
break;
case 5:
cout << "Exiting program.\n";
return 0;
default:
cout << "Invalid choice! Try again.\n";
}
}
return 0;
}
