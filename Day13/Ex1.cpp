#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
    public:
        virtual void show(){}
};
class Derived: public Base{};
int main(){
    Base B;
    Derived d;
    Base* b = &d;    
    cout << typeid(B).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(*b).name() << endl;
    return 0;
}