#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
public:
    void calculateSalary() override {
        cout << "Calculating salary for Full Time Employee" << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    void calculateSalary() override {
        cout << "Calculating salary for Part Time Employee" << endl;
    }
};

int main() {
    Employee* emp1 = new FullTimeEmployee();
    Employee* emp2 = new PartTimeEmployee();

    emp1->calculateSalary();
    emp2->calculateSalary();
    return 0;
}
