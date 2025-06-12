#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int calculateArea() {
        return length * breadth;
    }
};

int main() {
    int l, b;
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter breadth of the rectangle: ";
    cin >> b;

    Rectangle myRectangle(l, b);
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    return 0;
}
