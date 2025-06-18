#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child child;
    child.display();
    return 0;
}

private:
    int data;
Parent(int d) : data(d) {
        cout << "Parent class constructor with data: " << data << endl;
    }
     with data:  << datarivate:
    int childData;
pChild(int d, int cd) : Parent(d), childData(cd) {
        cout << "Child class constructor with data: " << childData << endl;
    }
   