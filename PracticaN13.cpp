//Trabajo Cuestionario de preguntas
//Práctica en clase Stalyn Cachaguay

#include <iostream> 
#include <string> 
#include <cctype>   

using namespace std;

void hacerPregunta(const string& tituloPregunta,
                   const string& textoPregunta,
                   const string& opcionA,
                   const string& opcionB,
                   const string& opcionC,
                   const string& opcionD,
                   char respuestaCorrecta,
                   int& puntaje) { 

    cout << "\n----------------------------------------\n";
    cout << tituloPregunta << "\n\n"; 
    cout << textoPregunta << "\n\n"; 
    cout << "a) " << opcionA << endl; 
    cout << "b) " << opcionB << endl; 
    cout << "c) " << opcionC << endl; 
    cout << "d) " << opcionD << endl; 
    cout << "----------------------------------------\n";

    char respuestaUsuario;
    cout << "Tu respuesta (a, b, c, o d): ";
    cin >> respuestaUsuario; 

    respuestaUsuario = tolower(respuestaUsuario);

    if (respuestaUsuario == respuestaCorrecta) {
        cout << "¡Correcto!\n";
        puntaje++; 
    } else {
        cout << "Incorrecto. La respuesta correcta era: " << respuestaCorrecta << "\n";
    }
}

int main() {
    int puntajeTotal = 0; 

    cout << "¡Bienvenido al Cuestionario de Conocimiento General!\n";
    cout << "Responde las siguientes preguntas de opción múltiple.\n";

    hacerPregunta("PREGUNTA 1: Colores",
                  "Cual es el color primario que se mezcla con el amarillo para obtener el verde?",
                  "Azul",
                  "Rojo",
                  "Blanco",
                  "Negro",
                  'a',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 2: Sonidos de animales",
                  "Que animal es conocido por maullar?",
                  "Perro",
                  "Vaca",
                  "Gato",
                  "Caballo",
                  'c',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 3: Tiempo",
                  "Cuantos dias tiene una semana?",
                  "5",
                  "6",
                  "7",
                  "8",
                  'c',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 4: Estaciones del año",
                  "Cual es la estación donde los arboles pierden sus hojas?",
                  "Primavera",
                  "Verano",
                  "Otono",
                  "Invierno",
                  'c',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 5: Bebidas",
                  "Que bebida se obtiene de las uvas?",
                  "Cerveza",
                  "Leche",
                  "Agua",
                  "Vino",
                  'd',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 6: Formas",
                  "Que forma tiene una pelota de futbol?",
                  "Cuadrada",
                  "Triangular",
                  "Redonda",
                  "Ovalada",
                  'c',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 7: Geografia",
                  "Cual es el oceano más grande de la Tierra?",
                  "Atlantico",
                  "Indico",
                  "Pacifico",
                  "Ártico",
                  'c',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 8: Animales acuaticos",
                  "¿Que animal vive en el agua y tiene branquias?",
                  "Pajaro",
                  "Pez",
                  "Conejo",
                  "Leon",
                  'b',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 9: Numeros",
                  "Cual es el numero despues del nueve?",
                  "Ocho",
                  "Diez",
                  "Once",
                  "Siete",
                  'b',
                  puntajeTotal);

    hacerPregunta("PREGUNTA 10: Utiles escolares",
                  "Que se usa para escribir en un cuaderno?",
                  "Tijeras",
                  "Lapiz",
                  "Regla",
                  "Goma",
                  'b',
                  puntajeTotal);

    cout << "\n----------------------------------------\n";
    cout << "¡Cuestionario terminado!\n";
    cout << "Tu puntaje final es: " << puntajeTotal << " de 10.\n";
    cout << "----------------------------------------\n";

    return 0; 
}
