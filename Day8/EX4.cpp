#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    int second;
    public:
    time operator++(int){
        time temp=*this;
        second++;
        return temp;
    }
    void initialize(int a, int b, int c)
    {
        this->hour=a;
        this->minute=b;
        this->second=c;
    }
    void display()
    {lies of P game studio
        cout<<"Hours: "<<this->hour<<endl;
        cout<<"Minutes: "<<this->minute<<endl;
        cout<<"Seconds: "<<this->second<<endl;
    }
};
int main()
{
    class time t1;
    t1.initialize(12, 5, 6);
    cout<<"Before using opeator: "<<endl;
    t1.display();
    t1++;
    cout<<"After using opeator: "<<endl;
    t1.display();
    return 0;
}  