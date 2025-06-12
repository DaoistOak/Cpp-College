#include <iostream>
using namespace std;

int digits_sum(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = digits_sum(num);
    cout << "Sum of the digits is: " << sum << endl;
    return 0;
}
