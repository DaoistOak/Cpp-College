#include <iostream>

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }

    void displayComplexNumber() {
        std::cout << "Complex Number: " << real << " + " << imaginary << "i" << std::endl;
    }
};

using namespace std;

int main() {
    Complex num(3.5, 2.0);
    num.displayComplexNumber();

    return 0;
}


