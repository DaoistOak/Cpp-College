#include <iostream>
using namespace std;

class Shape {
protected:
    float area;
public:
    void setArea(float a) {
        area = a;
    }
};

class Circle : public Shape {
private:
    float r;
public:
    void setRadius(float radius) {
        r= radius;
    }
    void calculateArea() {
        setArea(3.14f * r * r);
    }
    void displayArea() {
        cout << "Area of the circle: " << area << endl;
    }
};

int main() {
    Circle circle;
    float rad;
    cout << "Enter radius: ";
    cin >> rad;
    circle.setRadius(rad);
    circle.calculateArea();
    circle.displayArea();
    return 0;
}


