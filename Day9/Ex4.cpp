#include<iostream>
using namespace std;

class WeightConverter {
public:
    float weight;
    WeightConverter(float w) {
        weight = w * 2.20462;
    }
};

int main() {
    float w;
    cout << "Enter weight in Pound: ";
    cin >> w;
    WeightConverter wc(w);
    cout << "Weight in Kg: " << wc.weight << endl;
    return 0;
}
