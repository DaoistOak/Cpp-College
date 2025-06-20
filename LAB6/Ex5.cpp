#include <iostream>
using namespace std;
class Engine{
    private:
        int horsepower=0;
    public:
        Engine(int hp){
            horsepower=hp;
        }
        void display(){
            cout<<"Horsepower: "<<horsepower<<endl;
        }
};

class Car{
    private:
        string brand;
        Engine engine;
    public:
        Car(string b, int hp):brand(b),engine(hp){}
        void display(){
            cout<<"Brand: "<<brand<<endl;
            engine.display();
        }
};

int main(){
    Car car("Nissan", 100);
    car.display();
    return 0;
}