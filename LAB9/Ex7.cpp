#include <iostream>
#include <exception>
#include<stdexcept>
#include <string>
using namespace std;

void customUnexpected() {
    cout << "Custom unexpected handler called" << endl;
    throw;
}

double myFunction() throw(double) {
    throw 10;
}

int main() {
    set_unexpected(customUnexpected);
    try {
        myFunction();
    }
    catch (int e) {
        cout << "Caught int exception: " << e << endl;
    }
    return 0;
}

