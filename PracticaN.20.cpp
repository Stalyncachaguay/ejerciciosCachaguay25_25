//Práctica N.20 Stalyn Cachaguay
//Ej.7
//Convertir Celsius a Fahrenheit

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double gradosCelsius;

    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> gradosCelsius;

    double gradosFahrenheit = celsiusToFahrenheit(gradosCelsius);

    cout << fixed << setprecision(2); 
    cout << gradosCelsius << " grados Celsius equivalen a "
         << gradosFahrenheit << " grados Fahrenheit." << endl;

    return 0;
}

