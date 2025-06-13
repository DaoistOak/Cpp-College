#include<iostream>
#include<string>
using namespace std;

class City {
    private:
        string CityName;
        float DistFromKtm;
    
    public:
        void setCityName(string name) {
            CityName = name;
        }
        
        void setDistFromKtm(float dist) {
            DistFromKtm = dist;
        }
        
        string getCityName() {
            return CityName;
        }
        
        float getDistFromKtm() {
            return DistFromKtm;
        }
        
        float operator+(City c) {
            return this->DistFromKtm + c.DistFromKtm;
        }
        
        float operator-(City c) {
            return abs(this->DistFromKtm - c.DistFromKtm);
        }
};

int main() {
    City c1, c2, c3;
    
    c1.setCityName("Pokhara");
    c1.setDistFromKtm((float)123.45);
    
    c2.setCityName("Dhangadi");
    c2.setDistFromKtm((float)234.56);
    
    cout << "Sum of distances from Kathmandu: " << c1 + c2 << endl;
    cout << "Distance between " << c1.getCityName() << " and " << c2.getCityName() << ": " << c1 - c2 << endl;
    
    return 0;
}