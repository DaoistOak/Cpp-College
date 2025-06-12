#include <iostream>
using namespace std;
class Employee {
private:
    int employeeID;
    string name;
    double salary;
public:
    void readDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    int numE;
    cout << "Enter the number of employees: ";
    cin >> numE;
    Employee* employees = new Employee[numE];
    for (int i = 0; i < numE; i++) {
        cout << "\nEnter details for Employee " << i + 1 << endl;
        employees[i].readDetails();
    }
    cout << "\nDetails of all employees:" << endl;
    for (int i = 0; i < numE; i++) {
        cout << "\nEmployee " << i + 1 << " details:" << endl;
        employees[i].displayDetails();
    }
    return 0;
}
