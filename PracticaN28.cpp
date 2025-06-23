//Ejercicio en clases
//Practica e2n clase Cachaguay Stalyn

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Stalyn Cachaguay";
    string actividad = "";
    int edad = 0;

    cout << "Hola, mundo. Que gusto conocerte, " << nombre << endl;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad > 18) {
        cout << nombre << " eres MAYOR de edad." << endl;
        cout << "¿ Cuales son tus actividades favoritas ? Puedes decirme la mas importante: ";
        
        cin.ignore(); 
        getline(cin, actividad);
        cout << "Actividad favorita: " << actividad << endl;
    } else {
        cout << nombre << ", eres MENOR de edad." << endl;
    }

    cout << "Mi nombre es: " << nombre << " y mi edad es: " << edad << endl;

    return 0;
}

