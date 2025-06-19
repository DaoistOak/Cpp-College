#include <iostream>

using namespace std;

class Animal {
public:
    string name;

    Animal(string n) : name(n) {}

    void eat() {
        cout << name << " is eating." << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    Dog(string n, string b) : Animal(n), breed(b) {}

    void bark() {
        cout << name << " the " << breed << " is barking." << endl;
    }
};

int main() {
    Dog myDog("Buddy", "Golden Retriever");

    myDog.eat();

    myDog.bark();

    return 0;
}
