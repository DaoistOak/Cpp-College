#include<iostream>
using namespace std;

class Currency {
    float npr;
public:
    Currency(float usd) {
        npr = usd * ()130;
    }
    operator float() {
        return npr;
    }
};

int main() {
    float usd;
    cout << "Enter amount in USD: ";
    cin >> usd;
    Currency c(usd);
    float npr = c;
    cout << "Amount in NPR: " << npr << endl;
    return 0;
}
