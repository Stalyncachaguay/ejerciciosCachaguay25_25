//Práctica N.24 Stalyn Cachaguay
//Ej.10
//Potencia de un numero 

#include <iostream>
#include <string>

using namespace std;

double calcularPotenciaManual(double base, int exponente) {
    if (exponente == 0) {
        return 1.0;
    }
    if (base == 0 && exponente > 0) {
        return 0.0;
    }
    if (exponente < 0) {
        double resultadoPositivo = 1.0;
        for (int i = 0; i < -exponente; ++i) {
            resultadoPositivo *= base;
        }
        return 1.0 / resultadoPositivo;
    }
    double resultado = 1.0;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    double base;
    int exponente;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente (puede ser negativo): ";
    cin >> exponente;
    double resultadoPotencia = calcularPotenciaManual(base, exponente);
    cout << base << " elevado a la potencia de " << exponente
         << " es: " << resultadoPotencia << endl;
    return 0;
}
