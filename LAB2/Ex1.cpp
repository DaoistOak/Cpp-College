#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

float add(int a, float b) {
    return (float)a + b;
}
int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    cout << "Sum of two integers: " << add(n1, n2) << endl;
    
    float f1, f2;
    cout << "Enter two float numbers: ";
    cin >> f1 >> f2;
    
    cout << "Sum of two floats: " << add(f1, f2) << endl;
    
    int N;
    float F;
    cout << "Enter an integer and a float number: ";
    cin >> N >> F;
    
    cout << "Sum of an integer and a float: " << add(N, F) << endl;

    return 0;
}