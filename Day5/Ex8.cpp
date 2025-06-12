#include <iostream>

using namespace std;

class Employees {
private:
    int id;
    string name;
    float salary;

public:
    Employees() {
        id = 0;
        name = "John Doe";
        salary = 0.0;
    }

    Employees(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employees emp1;
    emp1.displayEmployeeDetails();

    Employees emp2(101, "Alice", 5000.0);
    emp2.displayEmployeeDetails();

    return 0;
}

