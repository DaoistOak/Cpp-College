#include <iostream>
using namespace std;
float calculateTotalPrice(float itemPrice, int quantity = 1) {
    return itemPrice * (float)quantity;
}
int main() {
    float itemPrice;
    int quantity;

    cout << "Enter the price of the item: ";
    cin >> itemPrice;

    cout << "Enter the quantity of the item: ";
    cin >> quantity;

    cout << "Total price: " << calculateTotalPrice(itemPrice, quantity) << endl;

    return 0;
}