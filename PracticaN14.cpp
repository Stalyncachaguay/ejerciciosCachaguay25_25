//Práctica N.14 Stalyn Cachaguay
//Ej.1
//Funcion de Saludo

#include <iostream> 
#include <string>  

using namespace std;

void saludar(string nombre) {
    cout << "Hola, " << nombre << "! Bienvenido/a al centro de computo!" << endl;
}

int main() {
    string nombreUsuario; 
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombreUsuario); 

    saludar(nombreUsuario);
   
    return 0;
}

