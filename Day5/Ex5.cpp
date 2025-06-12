#include <iostream>
using namespace std;

class Battery {
public:
    void displayCharge() {
        cout << "Battery charge status: 100%" << endl;
    }
};

class Mobile {
private:
    Battery battery;

public:
    void displayBatteryStatus() {
        battery.displayCharge();
    }
};

int main() {
    Mobile myMobile;
    myMobile.displayBatteryStatus();

    return 0;
}


