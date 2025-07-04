#include <iostream>
using namespace std;
class A{
    public:
        A(int a){
            cout << a << " was received";
        }
};
class B: public A{
    public:
        B(int b, int a) : A(a){
            cout << b << " was received";
        }
};
class C: public B{
    public:
        C(int c, int b, int a) : B(b, a){
            cout << c << " was received";
        }
};
int main(){
    C obj1(30, 10, 20);
    return 0;
}