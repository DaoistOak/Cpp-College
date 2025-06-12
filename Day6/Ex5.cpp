#include <iostream>
using namespace std;
class Rectangle {
private:
    int l;
    int b;

public:
    Rectangle(int l, int b) : l(l), b(b) {}

    Rectangle combine(const Rectangle &other) {
        int newLength = l + other.l;
        int newBreadth = b + other.b;
        return Rectangle(newLength, newBreadth);
    }

    void display() {
        cout << "Length: " << l << endl;
        cout << "Breadth: " << b << endl;
    }
};

int main() {

    Rectangle r1(5, 10);
    Rectangle r2(3, 7);

    Rectangle r3 = r1.combine(r2);

    cout << "Rectangle 1:" << endl;
    r1.display();

    cout << "Rectangle 2:" << endl;
    r2.display();

    cout << "Combined Rectangle:" << endl;
    r3.display();

    return 0;
}


