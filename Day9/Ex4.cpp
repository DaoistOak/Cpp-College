#include<iostream>
using namespace std;

class WeightConverter {
    float weight;
public:
    WeightConverter(float w) {
        weight = w;
    }
    float convertToKg() {
        return weight * 0.453592;
    }
    float convertToPound() {
        return weight * 2.20462;
    }
};

int main() {
    float w;
    cout << "Enter weight in Pound: ";
    cin >> w;
    WeightConverter wc(w);
    cout << "Weight in Kg: " << wc.convertToKg() << endl;
    cout << "Weight in Pound: " << wc.convertToPound() << endl;
    return 0;
}
