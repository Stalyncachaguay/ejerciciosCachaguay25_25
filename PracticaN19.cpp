//Práctica N.19 Stalyn Cachaguay
//Ej.6  
//factoriar entre dos numeros

#include <iostream> 
#include <string> 

using namespace std;

long long calcularFactorial(int numero) {
    if (numero < 0) {
        cout << "Error: El factorial no está definido para números negativos." << endl;
        return -1; 
    } else if (numero == 0) {
        return 1;
    } else {
        long long factorial = 1; 
        for (int i = 1; i <= numero; ++i) {
            factorial *= i; 
        }
        return factorial; 
    }
}

int main() {
    int num; 
    cout << "Por favor, ingresa un numero entero positivo para calcular su factorial: ";
    cin >> num; 

    long long resultadoFactorial = calcularFactorial(num);
    if (resultadoFactorial != -1) {
        cout << "El factorial de " << num << " es: " << resultadoFactorial << endl;
    }
    return 0; 
}
