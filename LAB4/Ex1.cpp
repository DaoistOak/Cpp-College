#include <iostream>
using namespace std;
class Counter {
private:
    static int count;

public:
    Counter() {
        count++; 
    }

    ~Counter() {
        count--; 
    }

    static void displayCount() {
        cout << "No of objects: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter::displayCount();
    Counter c1;             
    Counter::displayCount();
    Counter c2;             
    Counter::displayCount();
    Counter c3;         
    Counter::displayCount();
    return 0;
}
