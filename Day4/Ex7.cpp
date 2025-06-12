#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int add(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};

int main() {
    Calculator calc;
    int num1, num2, num3;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of two numbers: " << calc.add(num1, num2) << endl;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three numbers: " << calc.add(num1, num2, num3) << endl;

    return 0;
}
