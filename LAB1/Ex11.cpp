#include <iostream>
using namespace std;

int main(){
    char a = 'A';

    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout <<(char)(a + j) << " ";
        }
        cout << endl;
    }

    return 0;
}