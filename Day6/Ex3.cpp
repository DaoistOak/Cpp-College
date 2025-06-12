#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    Person(const Person &other) {
        name = other.name;
        age = other.age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person1("Alice", 30);
    Person person2 = person1;

    cout << "Person 1 details:" << endl;
    person1.displayPersonDetails();

    cout <<endl << "Person 2 details:" << endl;
    person2.displayPersonDetails();

    return 0;
}
