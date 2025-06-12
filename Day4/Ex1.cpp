#include <iostream>
using namespace std;

class car{
    public:
        string brand, model;
        int year;
        void input(){
            cout<<"Enter brand, model and year"<<endl;
            cin>>brand>>model>>year;
        }
        void display(){
            cout<<"Car: "<<brand<<" "<<model<<" "<<year<<endl;
        }
};

int main(){
    car c;
    c.input();
    c.display();
   return 0; 
}