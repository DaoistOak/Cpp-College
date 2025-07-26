#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}
    friend ostream &operator << (ostream &out, const Complex &c);
};

ostream &operator << (ostream &out, const Complex &c) {
    out << c.real;
    out << " + " << c.imag<< "i" << endl;
    return out;
}

int main() {
    Complex c(10, 20);
    cout << c;
    return 0;
}
