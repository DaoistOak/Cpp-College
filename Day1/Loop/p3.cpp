#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    do {
        int cols = rows;
        do {
            cout << "* ";
            cols--;
        } while (cols >= 1);
        cout << "\n";
        rows--;
    } while (rows >= 1);
    return 0;
}
