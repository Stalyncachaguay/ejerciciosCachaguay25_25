//Práctica N.17 Stalyn Cachaguay
//Ej.4
//Area de un triangulo 

#include <iostream> 
#include <string> 

using namespace std;

double calcularAreaTriangulo(double base, double altura) {
    double area = (base * altura) / 2.0; 
    return area;
}

int main() {
    double baseTriangulo;   
    double alturaTriangulo; 
    double areaCalculada;   
    
    cout << "Por favor, ingresa la longitud de la base del triangulo: ";
    cin >> baseTriangulo; 
    cout << "Por favor, ingresa la altura del triangulo: ";
    cin >> alturaTriangulo; 
    
    areaCalculada = calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    
    cout << "El area del triangulo con base " << baseTriangulo
         << " y altura " << alturaTriangulo << " es: " << areaCalculada << endl;

    return 0; 
}
