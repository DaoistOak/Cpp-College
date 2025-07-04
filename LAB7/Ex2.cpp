#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal(){
        cout << "Animal Destructor" << endl;
    };
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog Barks" << endl;
    }
    ~Dog() {
        cout << "Dog Destructor" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat Meows" << endl;
    }
    ~Cat() {
        cout << "Cat Destructor" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->speak();
    delete animal;
    animal = new Cat();
    animal->speak();
    delete animal;

    return 0;
}


