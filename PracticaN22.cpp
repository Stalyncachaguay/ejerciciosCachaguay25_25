//Práctica N.22 Stalyn Cachaguay
//Ej.8
//verificar numero primo 

#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2) {
        return true;
    }
    if (numero % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(numero); i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Ingresa un numero entero para verificar si es primo: ";
    cin >> num;
    if (esPrimo(num)) {
        cout << num << " SI es un numero primo." << endl;
    } else {
        cout << num << " NO es un numero primo." << endl;
    }
    return 0;
}
