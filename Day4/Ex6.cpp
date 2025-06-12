#include <iostream>
using namespace std;

class Account{
    private:
        string acc_num;
        float balance;
    public:
        void info();
        void change();
};
void Account::info(){
            cout<<"Enter Account Number and Balance"<<endl;
            getline(cin,acc_num);
            cin>>balance;
        };
void Account::change(){
            int op=0;
            float b=0;
            cout<<"Choose an operation:"<<endl<<"1)Deposit"<<endl<<"2)Withdraw"<<endl<<"Option: ";
            cin>>op;
            switch(op){
                case 1:
                    cin>>b;
                    balance+=b;
                    break;
                case 2:
                    cin>>b;
                    if(b<=balance){
                    balance-=b;
                    }else{
                        cout<<"Insufficeint Baance:"<<endl;
                    }
                    break;
                default:
                    cout<<"Wrong Option, Terminated"<<endl;
            }
            cout<<"Current Balance: "<<balance<<endl;
        };
int main(){
    Account a1;

    a1.info();
    a1.change();
   return 0; 
}