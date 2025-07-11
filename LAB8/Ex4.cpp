#include<iostream>
using namespace std;
template <typename T>
class Base {
protected:
    T data;

public:
    Base(T value) : data(value) {}

    void display() {
        cout << "Base: " << data << endl;
    }
};

template <typename T>
class Derived : public Base<T> {
private:
    T extraData;

public:
    Derived(T value, T extraValue) : Base<T>(value), extraData(extraValue) {}

    void display() {
        Base<T>::display();
        cout << "Derived: " << extraData << endl;
    }
};

int main() {
    Derived<string> dString("This is ", "a string!");
    dString.display();

    Derived<int> dInt(10, 20);
    dInt.display();

    return 0;
}
