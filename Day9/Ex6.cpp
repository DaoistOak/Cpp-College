#include<iostream>
using namespace std;

class WeightConverter {
    float weight;
public:
    WeightConverter(float w) {
        weight = w / 2.20462;
    }
    operator float() {
        return weight;
    }
};

int main() {
    float w;
    cout << "Enter weight in Pound: ";
    cin >> w;
    WeightConverter wc(w);
    float w2 = wc;
    cout << "Weight in Kg: " << w2 << endl;
    return 0;
}
