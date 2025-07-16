#include <stdexcept>
#include <iostream>
using namespace std;
float computeArea(float radius) {
    if (radius < 0) {
        throw invalid_argument("Radius cannot be negative.");
    }
    return 3.14159 * radius * radius;
}


int main() {
    try {
        int n;
        cout << "Enter Radius : "<< endl;
        cin>>n;
        computeArea(n);

    } catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}