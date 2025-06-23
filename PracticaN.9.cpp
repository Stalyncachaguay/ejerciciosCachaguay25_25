// Práctica N.9 Stalyn Cachaguay
// Ej.7
// Dibujar un triángulo con asteriscos

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    int altura; 
    cout << "Por favor, ingresa la altura del triangulo (un numero entero positivo): ";
    cin >> altura; 

    if (altura <= 0) {
        cout << "La altura debe ser un numero entero positivo." << endl;
        return 1; 
    }
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*"; 
        }
        cout << endl; 
    }
    return 0; 
}

