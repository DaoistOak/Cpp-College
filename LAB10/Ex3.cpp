#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Employee {
private:
int empId;
char empName[50];
float salary;
public:
void inputData() {
cout << "Enter Employee ID: ";
cin >> empId;
cin.ignore();
cout << "Enter Employee Name: ";
cin.getline(empName, 50);
cout << "Enter Salary: ";
cin >> salary;
}
Compiled By : Er.karan dev bhatt
void displayData() {
cout << "Employee ID: " << empId << endl;
cout << "Employee Name: " << empName << endl;
cout << "Salary: Rs. " << salary << endl;
cout << "------------------------" << endl;
}
int getEmpId() {
return empId;
}
void setSalary(float newSalary) {
salary = newSalary;
}
};
int main() {
int searchId;
float newSalary;
bool found = false;
// Open file for reading and writing
fstream file("employee.dat", ios::binary | ios::in | ios::out);
if (!file) {
cout << "Error opening file!" << endl;
return 1;
}
// Get employee ID and new salary from user
cout << "Enter Employee ID to update: ";
cin >> searchId;
cout << "Enter new salary: ";
cin >> newSalary;
Employee emp;
long pos;
// Read through the file to find the employee
while (file.read((char*)&emp, sizeof(emp))) {
pos = file.tellg() - sizeof(emp); // Store position of current record
if (emp.getEmpId() == searchId) {
found = true;
emp.setSalary(newSalary); // Update salary
file.seekp(pos); // Move to the start of the record
file.write((char*)&emp, sizeof(emp)); // Write updated record
cout << "Salary updated successfully!\n";
cout << "Updated Employee Details:\n";
emp.displayData();
break;
}
Compiled By : Er.karan dev bhatt
}
if (!found) {
cout << "Employee with ID " << searchId << " not found!\n";
}
file.close();
return 0;
}
