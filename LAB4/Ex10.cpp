#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string name;
        double salary;
    public:
        Employee(string n = "", double s = 0.0) {
            this->name = n;
            this->salary = s;
        }
        void display() const {   
            cout << "Name: " << name << ", Salary: " << salary << endl; 
        }
        double getsalary() const {
            return salary;
        }
        string getname() const {
            return name;
        }
        void setEmployee(string n, double s) {
            name = n;
            salary = s;
        }
};

int main() {
    Employee e[5];
    string name;
    double salary;
    
    for(int i = 0; i < 5; i++) {
        cout << "Enter name for employee " << i+1 << ": ";
        cin >> name;
        cout << "Enter salary for employee " << i+1 << ": ";
        cin >> salary;
        e[i].setEmployee(name, salary);
    }

    cout << "\nEmployee Details:" << endl;
    for(int i = 0; i < 5; i++) {
        e[i].display();
    }

    cout << "\nHighest Salary Employee:" << endl;
    int maxIndex = 0;
    for(int i = 1; i < 5; i++) {
        if(e[i].getsalary() > e[maxIndex].getsalary()) {
            maxIndex = i;
        }
    }
    e[maxIndex].display();
    
    return 0;
}