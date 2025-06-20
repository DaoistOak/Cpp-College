#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() {
    // ~Shape(){
        cout << "Shape destructor called" << endl;
    }
};

class Rectangle : public Shape {
public:
    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }
};

int main() {
    Rectangle shape;
    return 0;
}

