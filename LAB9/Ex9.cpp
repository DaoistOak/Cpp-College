#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void checkAge(int age) {
    if (age < 0) {
        throw runtime_error("Invalid age");
    } else {
        cout << "Age is: " << age << endl;
    }
}

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    try {
        checkAge(age);
    } catch (runtime_error& e) {
        cout << "Caught runtime error: " << e.what() << endl;
    }
    
    return 0;
}