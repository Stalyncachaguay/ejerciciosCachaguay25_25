//Práctica N.23 Stalyn Cachaguay
//Ej.9
//verificar numero primo 

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int contarDigitosBucle(long long numero) {
    if (numero == 0) {
        return 1;
    }
    long long numAbs = (numero < 0) ? -numero : numero;
    int contador = 0;
    while (numAbs > 0) {
        numAbs /= 10;
        contador++;
    }
    return contador;
}

int contarDigitosString(long long numero) {
    string s = to_string(numero);
    if (numero < 0) {
        return s.length() - 1;
    }
    return s.length();
}

int contarDigitosLogaritmo(long long numero) {
    if (numero == 0) {
        return 1;
    }
    long long numAbs = (numero < 0) ? -numero : numero;
    return static_cast<int>(floor(log10(numAbs))) + 1;
}

int main() {
    long long num;

    cout << "Ingresa un numero entero: ";
    cin >> num;

    cout << "Metodo del bucle: El numero " << num << " tiene "
         << contarDigitosBucle(num) << " digitos." << endl;

    cout << "Metodo de string: El numero " << num << " tiene "
         << contarDigitosString(num) << " digitos." << endl;

    cout << "Metodo de logaritmo: El numero " << num << " tiene "
         << contarDigitosLogaritmo(num) << " digitos." << endl;

    return 0;
}
