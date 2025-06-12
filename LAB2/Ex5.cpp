#include <iostream>
using namespace std;

int& mod_array(int arr[], int index, int value) {
    arr[index] = value;
    return arr[index];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}, index, value;

    cout << "Enter the index of the element to modify: ";
    cin >> index;

    cout << "Enter the value to modify the element to: ";
    cin >> value;

    cout << "\nBefore modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    int mod_element = mod_array(arr, index, value);

    cout << "\nAfter modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nModified element at index " << index << ": " << mod_element << endl;

    return 0;
}


