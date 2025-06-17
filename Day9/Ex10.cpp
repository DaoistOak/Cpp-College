#include <iostream>
using namespace std;

class DistanceKm {
private:
    float km;

public:
    DistanceKm(float k): km(k) {}

    float getKm() {
        return km;
    }

};

class DistanceMiles {
private:
    float miles;

public:
    DistanceMiles(DistanceKm dk): miles(dk.getKm() * 0.621371f) {}

    void showDistance() {
        cout << "Distance in miles: " << miles << " miles" << endl;
    }
};

int main() {
    float km;
    cout << "Enter distance in km: ";
    cin >> km;
    DistanceKm dk(km);
    DistanceMiles dm(dk);
    dm.showDistance();
    return 0;
}
