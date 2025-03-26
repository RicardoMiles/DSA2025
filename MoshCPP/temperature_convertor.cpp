#include <iostream>

using namespace std;

int main(){
    cout << "Please enter a temperature in Fahrenheit format: " << endl;
    double fahrenheit_temperature;
    cin >> fahrenheit_temperature;

    // Celsius = (Fahrenheit - 32) / 1.8
    double celsius_temperature = (fahrenheit_temperature - 32) / 1.8;
    cout << "It is " << celsius_temperature << " degrees celsius." << endl;
 
    return 0;
}
