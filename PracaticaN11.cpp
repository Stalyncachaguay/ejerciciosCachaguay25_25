// Práctica N.11 Stalyn Cachaguay
// Ej.9
// Suma de los dígitos de un número

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    int numero;         
    int sumaDigitos = 0; 
    string numeroComoString; 

    cout << "Por favor, ingresa un numero entero: ";
    cin >> numero; 

    numeroComoString = to_string(numero);

    for (size_t i = 0; i < numeroComoString.length(); i++) {
        char digitoChar = numeroComoString[i];
        int digitoInt = digitoChar - '0';
        sumaDigitos += digitoInt;
    }
    cout << "La suma de los dígitos de " << numero << " es: " << sumaDigitos << endl;
    return 0; 
}



