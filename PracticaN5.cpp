// Práctica N.5 Stalyn Cachaguay
// Ej.3
// Tabla de multiplicar

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    int numero; 

    cout << "Por favor, ingresa un numero para ver su tabla de multiplicar: ";
    cin >> numero; 
    cout << "\n--- Tabla de multiplicar del " << numero << " ---\n";
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
    cout << "------------------------------------------\n";
    return 0; 
}


