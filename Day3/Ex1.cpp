#include <iostream>
using namespace std;

int summing(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = summing(a,n);
    cout << "Sum of all elements in the array: " << sum << std::endl;

    return 0;
}
