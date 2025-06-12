#include <iostream>

class MyClass {
public:
    static int count;

    MyClass() {
        count++;
    }
static void displayCount() {
    std::cout << "Count value: " << count << std::endl;
}
};

int MyClass::count = 0;

int main() {
    using namespace std;

    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    obj1.displayCount();
    obj2.displayCount();
    obj3.displayCount();

    return 0;
}