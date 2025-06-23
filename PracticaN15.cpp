//Práctica N.15 Stalyn Cachaguay
//Ej.2
//Suma de dos números

#include <iostream> 
#include <string> 

using namespace std;

int sumarDosNumeros(int num1, int num2) {

    int suma = num1 + num2;
   
    return suma;
}

int main() {
    int numeroA; 
    int numeroB; 
    int resultadoSuma;
    cout << "Por favor, ingresa el primer numero entero: ";
    cin >> numeroA;
    cout << "Por favor, ingresa el segundo numero entero: ";
    cin >> numeroB;

    resultadoSuma = sumarDosNumeros(numeroA, numeroB);

    cout << "La suma de " << numeroA << " y " << numeroB << " es: " << resultadoSuma << endl;

    return 0; 
}
