#include <iostream> 
#include <string>   

using namespace std;

int main() {
    string primernombre;    
    string apellidopaterno;  
    string apellidomaterno;

    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, primernombre); 

    cout << "Por favor, ingresa tu apellido paterno: ";
    getline(cin, apellidopaterno); 

    cout << "Por favor, ingresa tu apellido materno: ";
    getline(cin, apellidomaterno); 
    
    cout << "Hola, es un gusto conocerte " 
         << primernombre << " " 
         << apellidopaterno << " " 
         << apellidomaterno << "!" 
         << endl;

    return 0; 
}
