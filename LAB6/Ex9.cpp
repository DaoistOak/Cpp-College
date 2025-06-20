#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {
        cout << "Person constructor called" << endl;
    }
};

class Employee : public Person {
private:
    int employeeID;
public:
    Employee(string n, int a, int id) : Person(n, a), employeeID(id) {
        cout << "Employee constructor called" << endl;
    }
};

int main() {
    string name;
    int age, id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter employee ID: ";
    cin >> id;

    Employee emp(name, age, id);
    return 0;
}

