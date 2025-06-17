#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    double radius;
    double angle;

public:
    Polar(double r, double a): radius(r), angle(a) {}

    double getRadius() {
        return radius;
    }

    double getAngle() {
        return angle;
    }
};

class Cartesian {
private:
    double x;
    double y;

public:
    Cartesian(double x1, double y1) {
        this->x = x1;
        this->y = y1;
    }   

    Cartesian(Polar p) {
        this->x = p.getRadius() * cos(p.getAngle() * 3.14159 / 180);
        this->y = p.getRadius() * sin(p.getAngle() * 3.14159 / 180);
    }

    void display() {
        cout << "Cartesian coordinates: (" << x << ", " << y << ")" << endl;
    }

    friend Cartesian convertPolarToCartesian(Polar p);
};

Cartesian convertPolarToCartesian(Polar p) {
    double radius = p.getRadius();
    double angle = p.getAngle();

    double x = radius * cos(angle * 3.14159 / 180);
    double y = radius * sin(angle * 3.14159 / 180);

    return Cartesian(x, y);
}

int main() {
    Polar p(10, 45);
    Cartesian c = convertPolarToCartesian(p);
    c.display();

    return 0;
}
