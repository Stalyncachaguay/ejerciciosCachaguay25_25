//Trabajo en clase FUNCIONES
//Practica 27 Cachaguay Stalyn


#include <iostream>
using namespace std;

void funcionSinRetorno() {
    cout << "Nadie me llama, no imprimo nada" <<endl;
}

double division (int n1, int n2) {
    float resultado = n1 / n2;
    return resultado;
}

// función principal y es lo que se ejecuta

int main (){
    float resultadoFuncion = 0.0;
    funcionSinRetorno ();
    cout << "Este texto SI se va a imprimir" << endl;
    funcionSinRetorno ();
    resultadoFuncion = division (35, 7);
    resultadoFuncion *=5;
    cout << resultadoFuncion << endl;
    resultadoFuncion = division (40, 5);
    resultadoFuncion *=5;
    cout << resultadoFuncion << endl;
    resultadoFuncion = division (81, 9);
    resultadoFuncion *=5;
    cout << resultadoFuncion << endl;
    resultadoFuncion = division (108, 12);
    resultadoFuncion *=5;
    cout << resultadoFuncion << endl;
    return 0;
    cout << "este texto ya no se va a imprimir" << endl;
}