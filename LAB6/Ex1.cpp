#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}
};

class Student : public Person {
public:
    int rollNo;

    Student(string n, int a, int r) : Person(n, a), rollNo(r) {}
};

int main() {
    Person person("PERSON1", 20);
    cout << "Person Name: " << person.name << ", Age: " << person.age << endl;

    Student student("STUDENT1", 18, 101);
    cout << "Student Name: " << student.name << ", Age: " << student.age << ", Roll No: " << student.rollNo << endl;

    return 0;
}
