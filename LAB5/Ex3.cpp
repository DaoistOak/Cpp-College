#include <iostream>
using namespace std;

class Complex {
private:
    float x;
    float y;
    float z;
    
public:
    Complex(float a = 0, float b = 0, float c = 0) {
        x = a;
        y = b;
        z = c;
    }
    
    Complex operator+(Complex const& obj) {
        Complex res;
        res.x = x + obj.x;
        res.y = y + obj.y;
        res.z = z + obj.z;
        return res;
    }

    Complex operator-(Complex const& obj) {
        Complex res;
        res.x = x - obj.x;
        res.y = y - obj.y;
        res.z = z - obj.z;
        return res;
    }
    
    void display() {
        cout << x << "i + " << y << "j + " << z << "k" << endl;
    }
};

int main() {
    Complex c1((float)3.2, (float)4.5, (float)1.0);
    Complex c2((float)1.8, (float)2.5, (float)2.0);
    cout << "First vector: ";
    c1.display();
    
    cout << "Second vector: ";
    c2.display();
    
    Complex sum = c1 + c2;
    cout << "Sum of vectors: ";
    sum.display();

    Complex diff = c1 - c2;
    cout << "Difference of vectors: ";
    diff.display();
    return 0;
}