#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int squares[5];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int *ptr = arr;
    cout << "Squares of the integers:" << endl;
    for (int i = 0; i < 5; i++) {
        squares[i] = *(ptr + i) * *(ptr + i);
        cout << squares[i] << " ";
    }
    cout<<endl;
    return 0;
}