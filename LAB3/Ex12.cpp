#include <iostream>
using namespace std;
class Box {
private:
    float len;
    float bre;
    float hei;
public:
    Box(float l, float w, float h) {
        len = l;
        bre = w;
        hei = h;
    }
    inline float calculateVolume(float l, float w, float h) {
        return l* w* h;
    }
};
int main() {
    float l, w, h;
    cout << "Enter length, width, and height of the box: ";
    cin >> l >> w >> h;
    Box box(l, w, h);
    cout << "Volume of the box: " << box.calculateVolume(l, w, h) << endl;
    return 0;
}
