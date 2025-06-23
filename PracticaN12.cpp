// Práctica N.12 Stalyn Cachaguay
// Ej.10
// Serie Fibonacci

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    int n; 
    cout << "Ingresa la cantidad de terminos de la serie Fibonacci que deseas ver: ";
    cin >> n; 

    if (n <= 0) {
        cout << "La cantidad de terminos debe ser un número entero positivo." << endl;
        return 1; 
    }

    long long t1 = 0; 
    long long t2 = 1; 
    long long nextTerm; 

    cout << "Serie Fibonacci hasta el termino " << n << ":\n";

    for (int i = 1; i <= n; i++) {
        cout << t1;
        if (i < n) {
            cout << ", ";
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    return 0; 
}
