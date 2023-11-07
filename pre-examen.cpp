// Propuesta de examen

// Se agregan las librerias a utilizar
#include <iostream>
#include <cmath>

// Se utiliza el espacio de nombres std
using namespace std;

int main() {
    // Declaramos las variable que vamos a utilizar
    char respuesta;
    int limit;

    // Preguntamos si desea agregar un límite superior del rango del programa
    cout << "¿Desea agregar un limite al programa?"<< endl;
    cout << "SI = y ; NO= n"<< endl;
    cin >> respuesta;

    /* Se genera un condicional
    Si la respuesta es SI, se le pide al usuario que ingrese el límite superior del rango*/
    if (respuesta == 'y'){
        cout << "Ingrese el limite: ";
        cin >> limit;
    }
    // Si la respuesta es NO, el limite es 17
    else{
        limit = 17;
    }

    // Se crea un ciclo for para que se repita el proceso hasta que se cumpla el limite
    for (int a = 1; a <= limit; ++a) {
        for (int b = a; b <= limit; ++b) {
            double c = std::sqrt(a*a + b*b);
            // Verifica si a, b, c forman un triplete pitagórico.
            if (a * a + b * b == c * c) {
                // Si es verdadero, imprime el triplete en la consola.
                if (c == static_cast<int>(c)) {
                    std::cout << a << ", " << b << ", " << static_cast<int>(c) << std::endl;
                }
            }
        }
    }

    // Se termina el programa
    return 0;
}
