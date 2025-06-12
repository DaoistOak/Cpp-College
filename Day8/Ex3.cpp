#include <iostream>
using namespace std;

class Number {
private:
    int num;
    
public:
    Number(int n = 0) {
        num = n;
    }
    
    friend Number operator-(Number& n);
    
    void display() {
        cout << "Number is: " << num << endl;
    }
};

Number operator-(Number& n) {
    Number temp;
    temp.num = -n.num;
    return temp;
}

int main() {
    Number n1(5);
    
    cout << "Original number: ";
    n1.display();
    
    Number n2 = -n1; 
    cout << "After applying unary minus: ";
    n2.display();
    
    return 0;
}
