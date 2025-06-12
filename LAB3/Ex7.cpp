#include <iostream>
using namespace std;
class exmp {
private:
    int id;
public:
    exmp(int i) {
        id = i;
        cout << "Constructing object with ID: " << id << endl;
    }
    ~exmp() {
        cout << "Destructing object with ID: " << id << endl;
    }
};
int main() {
    exmp obj1(1);
    exmp obj2(2);
    exmp obj3(3);
    return 0;
}