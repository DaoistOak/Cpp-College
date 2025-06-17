#include<iostream>
using namespace std;

class DistanceConverter {
    float distance;
public:
    DistanceConverter(float d) {
        distance = d;
    }
    float convertToKm() {
        return distance / 1000;
    }
    float convertToMeter() {
        return distance * 1000;
    }
};

int main() {
    float d;
    cout << "Enter distance in Meter: ";
    cin >> d;
    DistanceConverter dc(d);
    cout << "Distance in Km: " << dc.convertToKm() << endl;
    cout << "Distance in Meter: " << dc.convertToMeter() << endl;
    return 0;
}

