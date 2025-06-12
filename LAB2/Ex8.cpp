#include <iostream>
using namespace std;

struct Structure {
    int num=10;
    char a='A';
    float num2=10.5;
};

union ExampleUni {
    int num3;
    char b;
    float num4;
};

int main() {
    Structure s;
    ExampleUni u;

    cout << "Structure data: " << sizeof(s);
    cout << "\nUnion data: " << sizeof(u.num3)<<endl;

    return 0;
}
