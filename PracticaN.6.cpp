// Práctica N.6 Stalyn Cachaguay
// Ej.4
// Contar pares del 1 al 50

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    cout << "Números pares del 1 al 50:\n";
    cout << "---------------------------\n";

    for(int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << endl; 
        }
    }
    return 0; 
}
