#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
    
public:
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}
    
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    
    friend void modifyRectangle(Rectangle& rect);
};

void modifyRectangle(Rectangle& rect, double l, double w) {
    rect.length += l;
    rect.width += w;
}

int main() {
    Rectangle rect(5, 3);
    
    cout << "Original Rectangle:" << endl;
    rect.display();

    double l, w;
    cout << "Enter length to add: ";
    cin >> l;
    cout << "Enter width to add: ";
    cin >> w;
    
    modifyRectangle(rect, l, w);
    
    cout << "Modified Rectangle:" << endl;
    rect.display();
    
    return 0;
}

