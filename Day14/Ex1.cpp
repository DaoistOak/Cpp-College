#include<iostream>
using namespace std;

template <class T>
class Base {
public:
    T baseValue;
    void showBase() {
        cout << "Base Value: " << baseValue << endl;
    }
};

template <class T>
class Derived : public Base<T> {
public:
    T derivedValue;
    void showDerived() {
        cout << "Derived Value: " << derivedValue << endl;
    }
};

int main() {#include<iostream>
using namespace std;
template <class T>
class Base{
    public:
        T baseValue:
        void showBase(){
            cout<< "Base Value:"<< baseValue<<endl;
        }
}
template<class T>
class Derived: public Base<T>{
    public:
    T derivedValue:
    void showDerived()
}
    Derived<int> obj;
    obj.baseValue = 10;
    obj.derivedValue = 20;

    obj.showBase();
    obj.showDerived();

    return 0;
}
