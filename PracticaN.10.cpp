// Práctica N.10 Stalyn Cachaguay
// Ej.8
// Número primo o no

#include <iostream> 
#include <cmath>  

using namespace std;

int main() {
    int numero;        
    int contadorDivisores = 0; 

    cout << "Por favor, ingresa un numero entero positivo para verificar si es primo: ";
    cin >> numero; 
    
    if (numero <= 1) {
        cout << numero << " no es un numero primo." << endl;
        return 0; 
    }
    
    for (int i = 1; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            if (i * i == numero) {
                contadorDivisores += 1; 
            } else {
                contadorDivisores += 2; 
            }
        }
    }
    
    if (contadorDivisores == 2) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }
    return 0; 
}
