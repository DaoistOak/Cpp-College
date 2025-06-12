#include <iostream> 
using namespace std;

inline int square(int num) {
    return num * num;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Square of " << num1 << " is: " << square(num1) << endl;
    cout << "Square of " << num2 << " is: " << square(num2) << endl;

    return 0;
}
