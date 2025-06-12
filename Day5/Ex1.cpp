#include <iostream>

using namespace std;
class Rectangle {
private:
    int area;

public:
    void setData(int l, int w);
    void displayArea();
};

inline void Rectangle::setData(int l, int w) {
    area=l*w;
}

inline void Rectangle::displayArea() {
    cout << "Area of the rectangle: " << area << endl;
}

int main() {
    Rectangle rect;
    int l,w;
    cout<<"Enter rectangle's details: "<<endl;
    cin>>l>>w;

    rect.setData(l,w);
    rect.displayArea();

    return 0;
}

