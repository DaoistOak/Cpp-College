#include <iostream>
using namespace std;
int main() {
    int size;
    int sum = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of the integers: " << sum << endl;

    delete[] arr;

    return 0;
}

