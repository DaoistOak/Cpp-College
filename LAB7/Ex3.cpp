#include <iostream>
#include <typeinfo>
using namespace std;

class Employee {
public:
    virtual void getRole(){
        cout << "Employee" << endl;
    };
};

class Manager: public Employee {
public:
    void getRole() override {
        cout << "Manager" << endl;
    }
};

class Engineer : public Employee {
public:
    void getRole() override {
        cout << "Engineer" << endl;
    }
};

int main() {
    Employee* emp[2] = {new Manager(), new Engineer()};
    cout << "Type of emp2, emp1: " << typeid(*emp[1]).name() << ", " << typeid(*emp[0]).name() << endl;
    Manager* manager1 = dynamic_cast<Manager*>(emp[0]);
    Manager* manager2 = dynamic_cast<Manager*>(emp[1]);
    manager1->getRole();
    manager2->getRole();
    delete emp[0];
    delete emp[1];

    return 0;
}

