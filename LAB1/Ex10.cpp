#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,o, d; 
    float result = 0.0;
    cout << "Enter a number: ";
    cin >> n;
    o = n;
    while (o != 0) {
        d = o % 10;
        result += pow((float)d, (float)3);
        o /= 10;
    }
    if (result == (float)n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}