#include <iostream>
#include <exception>
using namespace std;

void functionC() {
    throw runtime_error("Exception from function C");
}

void functionB() {
    functionC();
}

void functionA() {
    try {
        functionB();
    } catch (const exception& e) {
        cout << "Exception caught in function A: " << e.what() << endl;
    }
}

int main() {
    functionA();
    return 0;
}
