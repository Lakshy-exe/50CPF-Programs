#include <iostream>
using namespace std;

int main() {
    float celsius, kelvin, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Kelvin: " << kelvin << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}