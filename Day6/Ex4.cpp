#include<iostream>
using namespace std;
class Test {
private:
    int data;

public:
    Test(int d) : data(d) {}

    Test(const Test &other) {
        data = other.data;
    }

    // Test(const Test &other1) {
    //     data = other1.data;
    // }

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;
    Test t3(t1);

    cout << "t1 data:";
    t1.displayData();
    cout << "t2 data:";
    t2.displayData();
    cout << "t3 data:";
    t3.displayData();

    return 0;
}
