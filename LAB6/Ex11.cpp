#include <iostream>
using namespace std;

class A {
protected:
    int value;
public:
    A() {
        cout << "Enter value: ";
        cin >> value;
    }
};

class B : virtual public A {
    public:
        void displayValue(){
            cout<<"Class B";
        }
};

class C : virtual public A {
    public:
        void displayValue(){
            cout<<"Class C";
        }
};

class D : public B, public C {
public:
    void displayValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    D d;
    d.displayValue();
    return 0;
}
