#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter int= ";
    cin>>num;
    if(cin.fail()){
        cout<<"Invalid I/P";
        cin.clear();
        cin.ignore(1000,'\n');
    }else{
        cout<<"You entered: "<<num<<endl;

    }
    return 0;
}