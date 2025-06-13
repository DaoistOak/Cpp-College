#include <iostream>
using namespace std;

class Distance {
private:
    float m;
    float cm;

public:
    Distance() {
        m = 0.0f;
        cm = 0.0f;    
    }
    Distance(float meters, float centimeters) {
        this->m = meters;
        this->cm = centimeters;
        while (cm >= 100.0f) {
            cm -= 100.0f;
            m += 1.0f;
        }
    }

    void getDistance() {
        cout << "Enter meter: ";
        cin >> m;
        cout << "Enter centimeter: ";
        cin >> cm;
    }
    void showDistance() {
        cout << m << "m-" << cm << "cm";
    }
    friend bool operator>(Distance& d1, Distance& d2);
    friend bool operator==(Distance& d1, Distance& d2);
};

bool operator>(Distance& d1, Distance& d2) {
    float totalCm1 = d1.m * 100.0f + d1.cm;
    float totalCm2 = d2.m * 100.0f + d2.cm;
    return totalCm1 > totalCm2;
}

bool operator==(Distance& d1, Distance& d2) {
    float totalCm1 = d1.m * 100.0f + d1.cm;
    float totalCm2 = d2.m * 100.0f + d2.cm;
    return totalCm1 == totalCm2;
}

int main() {
    Distance dist1(7.0f, 60.5f);
    Distance dist2(1.0f, 50.5f);
    cout << "Distance 1: ";
    dist1.showDistance();
    cout << "Distance 2: ";
    dist2.showDistance();

    cout << endl << endl << "Comparisons:";
    cout << endl << "dist1 > dist2: " << ((dist1 > dist2) ? "true" : "false");
    cout << endl << "dist1 == dist2: " << ((dist1 == dist2) ? "true" : "false");

    return 0;
}
