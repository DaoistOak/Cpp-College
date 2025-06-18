#include <iostream>
using namespace std;

class DistanceKm {
private:
    float km;

public:
    explicit DistanceKm(float k): km(k) {}

    float getKm() {
        return km;
    }
};

int main() {
    float km;
    cout << "Enter distance in km: ";
    cin >> km;
    DistanceKm dk(km);
    cout << "Distance in km: " << dk.getKm() << " km" << endl;
    return 0;
}

