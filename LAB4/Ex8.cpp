#include <iostream>
using namespace std;

class Cla_B;
class Cla_A{
    private:
        int a;
    public:
        Cla_A(int A=10){
            this->a = A;
        }
        friend void display(Cla_A, Cla_B);
};
class Cla_B{
    private:
        int b;
    public:
        Cla_B(int B=20){
            this->b = B;
        }
        friend void display(Cla_A, Cla_B);
};
void display(Cla_A a, Cla_B b){
    cout<<"A+B:"<<a.a+b.b<<endl;
};
int main(){
    Cla_A A;
    Cla_B B;
    display(A, B);
    return 0;
}