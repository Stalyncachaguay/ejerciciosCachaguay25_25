// Práctica N.7 Stalyn Cachaguay
// Ej.5
// Factorial de un número

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    int numero;          
    long long factorial = 1; 

    cout << "Ingresa un numero entero no negativo para calcular su factorial: ";
    cin >> numero; 

    if (numero < 0) {
        cout << "El factorial no está definido para numeros negativos." << endl;
    } else if (numero == 0) {
        cout << "El factorial de 0 es: 1" << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial *= i; 
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }
    return 0; 
}

