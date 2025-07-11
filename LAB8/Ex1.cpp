#include<iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intA = 5;
    int intB = 10;
    cout << "Before swap: intA = " << intA << ", intB = " << intB << endl;
    swapValues(intA, intB);
    cout << "After swap: intA = " << intA << ", intB = " << intB << endl;

    float floatA = 3.14f;
    float floatB = 2.71f;
    cout << "Before swap: floatA = " << floatA << ", floatB = " << floatB << endl;
    swapValues(floatA, floatB);
    cout << "After swap: floatA = " << floatA << ", floatB = " << floatB << endl;

    char charA = 'A';
    char charB = 'B';
    cout << "Before swap: charA = " << charA << ", charB = " << charB << endl;
    swapValues(charA, charB);
    cout << "After swap: charA = " << charA << ", charB = " << charB << endl;

    return 0;
}



