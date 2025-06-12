#include <iostream>

using namespace std;
class Circle {
private:
    int radius;

public:
    void setRadius(int r);
    void displayArea();
};

inline void Circle::setRadius(int r) {
    radius = r;
}

inline void displayArea() {
    cout << "Area of the circle: " << 3.14 * radius * radius << endl;
}

int main() {
    Circle c;
    int r;
    cout << "Enter circle's radius: ";
    cin >> r;

    c.setRadius(r);
    c.displayArea();

    return 0;
}
