#include <iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n!=0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int r=reverse(n);
    if (n==r){
        cout<<"Palindrome"<<r;
    }else{
        cout<<"Not Palindrome"<<r;
    }
}