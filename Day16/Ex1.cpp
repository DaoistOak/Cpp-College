#include<iostream>
using namespace std;

int main(){
    int a,b,r;
    cout<<"Enter the value of a & b: ";
    cin>>a;
    cin>>b;
    try{
        if(b == 0){
            throw "Division by zero";
        }
        r = a / b;
        cout<<"The quotient is: "<<r<<endl;
    }catch(string e){
        cout<<e<<endl;
    }
    return 0;
}