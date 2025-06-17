#include<iostream>
using namespace std;

class NPR {
    float npr;
public:
    NPR(float usd) {
        npr = usd * 130.0f;
    }
    float getNPR() {
        return npr;
    }
};
class USD {
    float usd;
public:
    USD(float npr) {
        usd = npr / 130.0f;
    }
    float getUSD() {
        return usd;
    }
};
int main() {
    float npr;
    cout << "Enter amount in NPR: ";
    cin >> npr;
    NPR n(npr);
    cout << "Amount in USD: " << n.getNPR() << endl;
    return 0;
}
