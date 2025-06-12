#include <iostream>
using namespace std;

class ComplexExt {

public:
    float real;
    float imag;
    float conjugate;
    
    ComplexExt(float r = 0, float i = 0) {
        real = r;
        imag = i;
        conjugate = 0;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};


class Complex {
private:
    float real;
    float imag;
    
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    
    ComplexExt operator+(ComplexExt const& obj) {
        ComplexExt res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    

};
int main() {
    Complex c1((float)3.2, (float)4.5);
    Complex c2((float)1.8, (float)2.5);
    
    cout << "First complex number: ";
    c1.display();
    
    cout << "Second complex number: ";
    c2.display();
    
    ComplexExt c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();
    
    return 0;
}
