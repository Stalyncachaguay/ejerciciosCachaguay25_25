//Práctica N.25 Stalyn Cachaguay
//Ejercicio de FOR

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    for (int num : numeros) {
        cout << "Elemento: " << num << endl;
    }

    for (int& num : numeros) {
        num *= 2;
    }

    cout << "\nVector modificado:" << endl;

    for (int num : numeros) {
        cout << "Elemento: " << num << endl;
    }

    return 0;
}
