#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
    float area;

public:
    Rectangle() {
        length = 0;
        width = 0;
        area = 0;
    }
    Rectangle(float l, float w) {
        length = l;
        width = w;
        area = length * width;
    }
    void display() {
        cout << "Area of rectangle: " << area << endl;
    }
    Rectangle operator+(Rectangle r) {
        Rectangle temp;
        temp.area = this->area + r.area;
        return temp;
    }
};

int main() {
    float l1, w1, l2, w2;

    cin >> l1 >> w1;

    cin >> l2 >> w2;

    Rectangle r1(l1, w1);
    Rectangle r2(l2, w2);
    Rectangle r3;

    r3 = r1 + r2;
    
    cout << "\nSum of areas of both rectangles:" << endl;
    r3.display();

    return 0;
}
