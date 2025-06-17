#include<iostream>
using namespace std;

class DistanceConverter {
    float distance;
public:
    DistanceConverter(float d) {
        distance = d;
    }
    operator float() {
        return distance * 1000;
    }
};

int main() {
    float d;
    cout << "Enter distance: ";
    cin >> d;
    DistanceConverter dc(d);
    float d2 = dc;
    cout << "Distance in Meter: " << d2 << endl;
    return 0;
}
