#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
using namespace std;
int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age < 0) {
        try {
            throw runtime_error("Invalid age");
        } catch (runtime_error& e) {
            cout << "Caught runtime error: " << e.what() << endl;
        }
    } else {
        cout << "Age is: " << age << endl;
    }
    
    return 0;
}