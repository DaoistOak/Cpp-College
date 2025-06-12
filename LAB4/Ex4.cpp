#include <iostream>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point() {
        this->x = 0.0;
        this->y = 0.0;
    }
    Point(double x1, double y1) {
        this->x = x1;
        this->y = y1;
    }

    Point(const Point& p) {
        this->x = p.x;
        this->y = p.y;
    }

    Point getMidpoint(const Point& p) {
        Point midpoint;
        midpoint.x = (this->x + p.x) / 2.0;
        midpoint.y = (this->y + p.y) / 2.0;
        return midpoint;
    }

    void display() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
};

int main() {
    Point p1;
    cout << "Point 1 (default constructor): ";
    p1.display();

    Point p2(5.0, 3.0);
    cout << "Point 2 (parameterized constructor): ";
    p2.display();
    Point p3(p2);
    cout << "Point 3 (copy constructor): ";
    p3.display();
    Point p4(1.0, 2.0);
    cout << "Point 4 (parameterized constructor): ";
    p4.display();
    Point midpoint = p2.getMidpoint(p4);
    cout << "Midpoint between p2 and p4: ";
    midpoint.display();

    return 0;
}

