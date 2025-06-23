//Práctica N.26 Stalyn Cachaguay
//Ejercicio de If

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    int mayor;
    if (a > b) {
        mayor = a;
    } else {
        mayor = b;
    }

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
