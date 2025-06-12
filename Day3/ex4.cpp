#include<iostream>

using namespace std;

int cube(int num) {
    cout << "Cube of integer " << num << " is " << num*num*num << endl;
    return 0;
}

int cube(float num) {
    cout << "Cube of float " << num << " is " << num*num*num << endl;
    return 0;
}

int cube(double num) {
    cout << "Cube of double " << num << " is " << num*num*num << endl;
    return 0;
}

int main(){
    int in = 3;
    float fn = 3.5;
    double dn = 3.75;

    cube(in);
    cube(fn);
    cube(dn);

    return 0;
}