//Práctica N.18 Stalyn Cachaguay
//Ej.5
//Par o impar

#include <iostream> 
#include <string> 

using namespace std;

string esParOImpar(int numero) {
    if (numero % 2 == 0) {
        return "par"; 
    } else {
        return "impar"; 
    }
}

int main() {
    int numeroIngresado; 
    string resultado; 

    cout << "Por favor, ingresa un numero entero: ";
    cin >> numeroIngresado; 
    resultado = esParOImpar(numeroIngresado);
    cout << "El numero " << numeroIngresado << " es: " << resultado << endl;

    return 0; 
}

