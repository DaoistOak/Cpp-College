#include <iostream>
using namespace std;
int main() {
    double userInput;
    cout << "Enter a value: ";
    cin >> userInput;

    try {
        throw 3.14;
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }

    return 0;
}