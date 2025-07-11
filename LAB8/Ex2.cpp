#include<iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T maxValue(T a, T b, T c) {
    return maxValue(maxValue(a, b), c);
}

int main() {
    int intA, intB, intC;
    cout << "Enter three integers: ";
    cin >> intA >> intB >> intC;
    cout << "Max of 2: " << maxValue(intA, intB) << endl;
    cout << "Max of 3: " << maxValue(intA, intB, intC) << endl;

    double doubleA, doubleB, doubleC;
    cout << "Enter three doubles: ";
    cin >> doubleA >> doubleB >> doubleC;
    cout << "Max of 2 doubles: " << maxValue(doubleA, doubleB) << endl;
    cout << "Max of 3 doubles: " << maxValue(doubleA, doubleB, doubleC) << endl;

    char charA, charB, charC;
    cout << "Enter three characters: ";
    cin >> charA >> charB >> charC;
    cout << "Max of 2 characters: " << maxValue(charA, charB) << endl;
    cout << "Max of 3 characters: " << maxValue(charA, charB, charC) << endl;
    return 0;
}

