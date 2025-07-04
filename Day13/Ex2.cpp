#include<iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.5, double2 = 2.8;
    char char1 = 'a', char2 = 'z';

    cout << "Max of " << int1 << " and " << int2 << " is " << max(int1, int2) << endl;
    cout << "Max of " << double1 << " and " << double2 << " is " << max(double1, double2) << endl;
    cout << "Max of " << char1 << " and " << char2 << " is " << max(char1, char2) << endl;

    return 0;
}


