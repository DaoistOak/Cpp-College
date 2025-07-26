#include <iostream>
#include <exception>
using namespace std;
void customTerminate() {
    cout << "Custom terminate handler called" << endl;
    exit(1);
}
int main() {
    set_terminate(customTerminate);
    int value;
    cout << "Enter a number (non-zero to throw uncaught exception): ";
    cin >> value;
    try {
        if (value != 0) {
        throw string("Uncaught string exception thrown!");
        }
        cout << "No exception thrown, value is: " << value << endl;
    }
    catch (int e) {
        cout << "This catch block won't be used: " << e << endl;
    }
    return 0;
}