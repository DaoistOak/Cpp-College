#include <iostream>
using namespace std;

class Base{
    public:
        int pub_d;
    protected:
        int pro_d;
    private:
        int pri_d;
    public:
        Base(int p, int pr, int prr) : pub_d(p), pro_d(pr), pri_d(prr) {}
};

class Derived:public Base{
    public:
        Derived(int p, int pr, int prr) : Base(p, pr, prr) {}
        void display(){
            cout<<"Public Data: "<<pub_d<<endl;
            cout<<"Protected Data: "<<pro_d<<endl;
            // cout<<"Private Data: "<<pri_d<<endl;
        }
};
class Derived2:private Base{
    public:
        Derived2(int p, int pr, int prr) : Base(p, pr, prr) {}
        void display(){
            cout<<"Public Data: "<<pub_d<<endl;
            cout<<"Protected Data: "<<pro_d<<endl;
            // cout<<"Private Data: "<<pri_d<<endl;
        }
};
class Derived3:protected Base{
    public:
        Derived3(int p, int pr, int prr) : Base(p, pr, prr) {}
        void display(){
            cout<<"Public Data: "<<pub_d<<endl;
            cout<<"Protected Data: "<<pro_d<<endl;
            // cout<<"Private Data: "<<pri_d<<endl;
        }
};

int main(){
    Derived d(10,20,30);
    Derived2 d2(10,20,30);
    Derived3 d3(10,20,30);
    d.display();
    d2.display();
    d3.display(); 
    return 0;
}