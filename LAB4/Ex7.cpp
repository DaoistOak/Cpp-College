#include <iostream>
using namespace std;

class rect{
    private:
        double length;
        double width;
    public:
        rect(){
            this->length = 0;
            this->width = 0;
        }
        void display() const{
            cout << "Length: " << length << ", Width: " << width << endl;
        }
        void modparam(double l, double w) {
            cout << "Attempting Mod" << endl;
            this->length = l;
            this->width = w;
            cout << "Modified Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    rect r;
    r.display();
    double l, w;
    cout << "Enter Mod length: ";
    cin >> l;
    cout << "Enter Mod width: ";
    cin >> w;
    r.modparam(l, w);
    r.display();
    return 0;
}