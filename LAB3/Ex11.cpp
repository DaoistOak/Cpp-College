#include <iostream>
using namespace std;
class Square {
private:
    float l;
public:
    Square(float length) {
        l = length;
    }
    float calculateArea() {
        return l * l;
    }
};
class Rectangle {
private:
    float l;
    float b;
public:
    Rectangle(float length, float width) {
        l = length;
        b = width;
    }
    float calculateArea() {
        return l * b;
    }
};
int main() {
    float sideLength;
    cout << "Enter side length for square: ";
    cin >> sideLength;
    Square* square = new Square(sideLength);
    float length, width;
    cout << "Enter length and width for rectangle: ";
    cin >> length >> width;
    Rectangle* rectangle = new Rectangle(length, width);
    cout << "Area of square: " << square->calculateArea() << endl;
    cout << "Area of rectangle: " << rectangle->calculateArea() << endl;
    delete square;
    delete rectangle;
    return 0;
}
