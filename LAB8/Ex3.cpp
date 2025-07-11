#include<iostream>
using namespace std;
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else
            throw "Error: Division by zero.";
    }
};

int main() {
    Calculator<int> intCalc(10, 2);
    Calculator<float> floatCalc(10.5f, 2.5f);

    cout << "Int addition: " << intCalc.add() << endl;
    cout << "Int subtraction: " << intCalc.subtract() << endl;
    cout << "Int multiplication: " << intCalc.multiply() << endl;
    cout << "Int division: " << intCalc.divide() << endl;

    cout << "Float addition: " << floatCalc.add() << endl;
    cout << "Float subtraction: " << floatCalc.subtract() << endl;
    cout << "Float multiplication: " << floatCalc.multiply() << endl;
    cout << "Float division: " << floatCalc.divide() << endl;

    return 0;
}

