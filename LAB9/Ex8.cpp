#include <iostream>
#include <string>
using namespace std;

class TestClass {
private:
    int value;
public:
    TestClass(int val) {
        try {
            if (val < 0) {
                throw string("Negative value not allowed in constructor!");
            }
            value = val;
            cout << "Constructor: Object created with value " << value << endl;
        } catch (const string& e) {
            cout << "Constructor exception: " << e << endl;
            throw;
        }
    }
    ~TestClass() {
        cout << "Destructor: Cleaning up object with value " << value << endl;
    }
    void display() const {
        cout << "Current value: " << value << endl;
    }
};

int main() {
    try {
        int input;
        cout << "Enter a number for object creation: ";
        cin >> input;
        TestClass obj(input);
        obj.display();
    } catch (const string& e) {
        cout << "Main caught exception: " << e << endl;
    } catch (...) {
        cout << "Main caught unknown exception" << endl;
    }
    return 0;
}
