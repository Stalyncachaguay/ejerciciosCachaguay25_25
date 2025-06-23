// Práctica N.8 Stalyn Cachaguay
// Ej.6
// Contar letras de una palabra

#include <iostream> 
#include <string>  

using namespace std;

int main() {
    string palabra = "ejemplo";
    for (int i = 0; i < static_cast<int>(palabra.length()); i++) {
        cout << palabra[i] << endl;
    }
    
    cout << "La palabra tiene " << palabra.length() << " letras." << endl;

    return 0;
}
