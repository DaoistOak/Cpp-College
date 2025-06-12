#include <iostream>
using namespace std;

class B;

class A {
private:
    int numA;
public:
    A() : numA(12) {}
    friend class B;
};

class B {
public:
    void display(A &a) {
        cout << "Value of numA from class A: " << a.numA << endl;
    }
};

int main() {
    A a;
    B b;
    b.display(a);
    
    return 0;
}
