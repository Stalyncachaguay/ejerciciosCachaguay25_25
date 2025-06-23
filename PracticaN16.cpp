//Práctica N.16 Stalyn Cachaguay
//Ej.3
//Numero mayor

#include <iostream> 
#include <string> 

using namespace std;

int main() {
    int numero1; 
    int numero2; 
    cout << "Por favor, ingresa el primer numero entero: ";
    cin >> numero1; 
    cout << "Por favor, ingresa el segundo numero entero: ";
    cin >> numero2; 

    if (numero1 > numero2) {
        cout << "El numero mayor es: " << numero1 << endl;
    } else if (numero2 > numero1) {
        cout << "El numero mayor es: " << numero2 << endl;
    } else {
        cout << "Ambos numeros son iguales: " << numero1 << endl;
    }

    return 0;
}

