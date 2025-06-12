#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin >> num;
    for(int i = 0; i < 11; i++) {
        int r = num*i;        
        cout<<num<<"*"<<i<<" = "<<r<<endl; 
    }

    return 0;
}