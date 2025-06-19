#include <iostream>
using namespace std;

class Employee {
protected:
    int salary;
};

class Manager : public Employee {
public:
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    Manager manager;
    int sal;
    cout<< "Enter Salary: ";
    cin>>sal;
    manager.setSalary(sal);
    cout << "Manager's salary: " << manager.getSalary() << endl;
    return 0;
}


