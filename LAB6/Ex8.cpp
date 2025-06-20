#include <iostream>
using namespace std;
class Battery {
public:
    void showStatus() {
        cout << "Battery Status" << endl;
    }
};

class Screen {
public:
    void showStatus() {
        cout << "Screen Status" << endl;
    }
};

class Smartphone : public Battery, public Screen {
public:
    void showStatus() {
        Battery::showStatus();
        Screen::showStatus();
    }
};

int main() {
    Smartphone phone;
    phone.showStatus();
    return 0;
}

