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
    void getBonus(){
        cout << "Manager gets bonus" << endl;
    }
};

class Engineer : public Employee {
public:
    void getRole() override {
        cout << "Engineer" << endl;
    }
};

int main() {
    Employee* emp1 = new Manager();
    Employee* emp2 = new Engineer();
    Manager* manager1 = dynamic_cast<Manager*>(emp1);
    Manager* manager2 = dynamic_cast<Manager*>(emp2);
    cout << "Type of emp1, emp2: " << typeid(*emp1).name() << ", " << typeid(*emp2).name() << endl;
    emp1->getRole();
    emp2->getRole();
    if (manager1 != nullptr) {
        manager1->getBonus();
    }
    if (manager2 != nullptr) {
        manager2->getBonus();
    }

    return 0;
}

