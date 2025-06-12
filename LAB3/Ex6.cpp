#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float calcA() {
        return length * width;
    }
    float calcP() {
        return 2 * (length + width);
    }
};
int main() {
    float l, w;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    Rectangle R(l, w);
    cout<<"Area: "<<R.calcA()<<"\tPreimeter: " <<R.calcP()<<endl;  
    return 0;
}