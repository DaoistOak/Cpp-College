#include <iostream>
#include <string> // Added to include the string library

using namespace std;

class Employee {
private:
    string name;
    float salary;

public:
    void setData(const string& name, float salary) { // Changed parameter to const reference for efficiency
        this->name = name;
        this->salary = salary;
    }

    void displayInfo() {
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

int main() {
    Employee emp;
    string name = "John Doe";
    float salary = 5000.0;
    emp.setData(name, salary);
    emp.displayInfo();

    return 0;
}