#include <iostream>
using namespace std;

class DBZ {
public:
    string message;
    DBZ(string msg) {
        message = msg;
    }
};

int main() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    try {
        if (num2 == 0) {
            throw DBZ("Cannot divide by zero!");
        }
        float result = num1 / num2;
        cout << "Result: " << result << endl;
    } catch (DBZ e) {
        cout << "Exception caught: " << e.message << endl;
    }

    return 0;
}


