#include<iostream>
using namespace std;

template <class T>
class Shape {
public:
    Shape
    T length;
};

template <class T>
class Rectangle : public Shape<T> {
public:

    T breadth;
};

int main() {
    Rectangle<int> obj;
    obj.length = 5;
    obj.breadth = 10;

    cout << "Area of Rectangle: " << obj.length * obj.breadth<< endl;

    return 0;
}