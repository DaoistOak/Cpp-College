#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename U>
void Summation() {
    U a, b;
    cout << "Enter two values of type : ";
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " is " << add(a, b) << endl;
}

int main() {
    Summation();

    return 0;
}


