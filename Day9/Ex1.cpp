#include<iostream>
using namespace std;

class TemperatureConverter {
    float temperature;
public:
    TemperatureConverter(float temp) {
        temperature = temp;
    }
    float convertToFahrenheit() {
        return (temperature * 9.0 / 5.0) + 32;
    }
    float convertToCelsius() {
        return (temperature - 32) * 5.0 / 9.0;
    }
};

int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    TemperatureConverter tc(temp);
    cout << "Temperature in Fahrenheit: " << tc.convertToFahrenheit() << endl;
    cout << "Temperature in Celsius: " << tc.convertToCelsius() << endl;
    return 0;
}
