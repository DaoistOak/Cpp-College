#include <iostream>
using namespace std;
class Employee {
public:
    string name;
    int id;
    float salary;
    void increaseSalary() {
        salary *= (float)1.1;
    }
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int j;
    cout << "Enter the number of employees (max 100): ";
    cin >> j;
    if (j > MAX_EMPLOYEES) {
        cout << "Number exceeds maximum limit. Setting to " << MAX_EMPLOYEES << endl;
        j = MAX_EMPLOYEES;
    }
    for (int i = 0; i < j; i++) {
        employees[i].readData();
    }
    cout << "Details of all employees before salary increase:" << endl;
    for (int i = 0; i < j; i++) {
        employees[i].displayInfo();
    }
    for (int i = 0; i < j; i++) {
        employees[i].increaseSalary();
    }
    cout << "Details of all employees after salary increase:" << endl;
    for (int i = 0; i < j; i++) {
        employees[i].displayInfo();
    }
    return 0;
}