#include<iostream>

using namespace std;
class Time{
    public:
        int sec;
        int min;
    Time(int s){
        sec=s%60;
        min=s/60;
    }
};
int main(){
    Time t1(100);
    cout<<"Time: "<<t1.min<<":"<<t1.sec<<endl;
    return 0;
}