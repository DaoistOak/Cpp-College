#include<iostream>
using namespace std;

int main(){
    int a,b,r;
    cout<<"Enter the value of a & b: ";
    cin>>a;
    cin>>b;
    try{
        if(b == 0){
            throw -1;
        }
        r = a / b;
        cout<<"The quotient is: "<<r<<endl;
    }catch(int e){
        cout<<"Error code: "<<e<<endl;
    }
    return 0;
}