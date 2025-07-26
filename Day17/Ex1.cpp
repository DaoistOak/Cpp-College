#include <iostream>
#include <string>
using namespace std;
class MyException{
    string message;
    int errorCode;
    public:
     MyException(string m, int c): message(m), errorCode(c) {}

     string getMsg() const{
        return message  ;
     }
     int getCode() const{
        return errorCode;
     }
};

float divide(float a, float b) {
    if (b == 0) {
        throw MyException("Division by zero", 1);
    }
    return a / b;
}

int main() {
    try {
        float result = divide(10.0, 0.0);
        cout << "Result: " << result << endl;
    } catch (MyException e) {
        cout << "Error: " << e.getMsg() << " (Code: " << e.getCode() << ")" << endl;
    }
    return 0;
}