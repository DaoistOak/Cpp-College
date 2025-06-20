#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    int nA;
    cout << "Enter the number of animals(max 100): ";
    cin >> nA;

    Animal* animals[100];
    for(int i=0;i<nA;i++){
        cout << "Enter 1 for Dog or 2 for Cat: ";
        int choice;
        cin >> choice;
        if(choice == 1){
            animals[i] = new Dog();
        }else if(choice == 2){
            animals[i] = new Cat();
        }else{
            cout << "Invalid choice." << endl;
            return 1;
        }
        animals[i]->sound();
    }

    return 0;
}

